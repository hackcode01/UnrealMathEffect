cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

set(PROJECT_NAME math_core)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED 14)
set(CMAKE_CXX_STANDARD_DEFAULT 17)

add_executable(${PROJECT_NAME} src/main.cpp)
