#include "./include/algebraic/addition.hpp"
#include "./include/algebraic/subtraction.hpp"
#include "./include/algebraic/multiplication.hpp"
#include "./include/algebraic/division.hpp"
#include "./include/algebraic/vector_operations.hpp"

#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    std::cout << "23 + 45 = " << addition(23, 45) << '\n';
    std::cout << "23 - 11 = " << subtraction(23, 11) << '\n';
    std::cout << "44 * 5 = " << multiplication(44, 5) << '\n';
    std::cout << "120 / 5 = " << division(120, 5) << '\n';

    constexpr size_t count{16};
    float a[count] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    float b[count] = {16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    float result[count];

    add_vectors(a, b, result, count);
    std::cout << "Результат сложения векторов:\n";
    for (size_t i = 0; i < count; ++i) {
        std::cout << result[i] << ' ';
    }
    std::cout << "\n";

    std::cin.get();

    return 0;
}
