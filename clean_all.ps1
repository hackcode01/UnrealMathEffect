param (
    [string[]]$directoryPaths
)

# Function to check if the script is running with administrative privileges
function Test-Admin {
    $identity = [System.Security.Principal.WindowsIdentity]::GetCurrent()
    $principal = New-Object System.Security.Principal.WindowsPrincipal($identity)
    return $principal.IsInRole([System.Security.Principal.WindowsBuiltInRole]::Administrator)
}

# Check for admin rights
if (-not (Test-Admin)) {
    Write-Host "This script requires administrative privileges to delete directories."
    exit
}

# Check if any directory paths were provided
if (-not $directoryPaths) {
    Write-Host "Please provide at least one directory path."
    exit
}

# Process each directory path
foreach ($directoryPath in $directoryPaths) {
    if (Test-Path -Path $directoryPath -PathType Container) {
        try {
            # Attempt to delete the directory and all its contents
            sudo Remove-Item -Path $directoryPath -Recurse -ErrorAction Stop
            Write-Host "Directory '$directoryPath' deleted successfully."
        } catch {
            # Handle any errors that occur during deletion
            Write-Host "Failed to delete directory '$directoryPath': $($_.Exception.Message)"
        }
    } else {
        Write-Host "The path '$directoryPath' is not a directory or does not exist."
    }
}
