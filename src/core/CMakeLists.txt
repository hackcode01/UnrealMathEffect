cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

set(PROJECT_NAME math_core)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED 14)
set(CMAKE_CXX_STANDARD_DEFAULT 17)

file(GLOB_RECURSE SOURCES_FILES
    "include/*.h" "src/*.c" "include/*.hpp" "src/*.cpp"
)

add_executable(${PROJECT_NAME} ${SOURCES_FILES} main.cpp)
