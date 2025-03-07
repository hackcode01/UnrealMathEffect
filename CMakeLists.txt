cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

set(PROJECT_NAME math_engine)
project(${PROJECT_NAME})

add_subdirectory(./src/core)
add_subdirectory(./test)
add_subdirectory(./windows)
add_subdirectory(./linux)
add_subdirectory(./macos)
add_subdirectory(./lib)
