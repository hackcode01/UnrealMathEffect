#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int numberCmdShow) {
    MessageBoxA(nullptr, "Hello Math Engine", "Hello from Message Box", MB_OK);

    return 0;
}
