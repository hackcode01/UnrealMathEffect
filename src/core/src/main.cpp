#include <iostream>
#include <cstdint>

inline constexpr int_fast32_t add(int_fast32_t a, int_fast32_t b) {
    return a + b;
}

int main() {
    std::cout << add(2, -2) << '\n';

    return 0;
}
