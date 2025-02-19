cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

set(PROJECT_NAME test)
project(${PROJECT_NAME})

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.0
)

FetchContent_MakeAvailable(Catch2)

set(SOURCES_CODE
    ../src/core/include/types.hpp

    ../src/core/include/algebraic/addition.hpp
    ../src/core/include/algebraic/division.hpp
    ../src/core/include/algebraic/multiplication.hpp
    ../src/core/include/algebraic/subtraction.hpp

    ../src/core/src/algebraic/addition.cpp
    ../src/core/src/algebraic/division.cpp
    ../src/core/src/algebraic/multiplication.cpp
    ../src/core/src/algebraic/subtraction.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES_CODE} ./test.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain)
