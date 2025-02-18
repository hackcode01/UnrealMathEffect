#include "./include/algebraic/addition.hpp"
#include "./include/algebraic/subtraction.hpp"
#include "./include/algebraic/multiplication.hpp"
#include "./include/algebraic/division.hpp"

#include <iostream>

int main() {
    std::cout << addition(static_cast<fast_i32>(228), static_cast<fast_i32>(21)) << '\n';
    std::cout << subtraction(static_cast<fast_i32>(220), static_cast<fast_i32>(4)) << '\n';
    std::cout << multiplication(static_cast<fast_i32>(228), static_cast<fast_i32>(3)) << '\n';
    std::cout << division(static_cast<fast_i32>(220), static_cast<fast_i32>(4)) << '\n';

    return 0;
}
