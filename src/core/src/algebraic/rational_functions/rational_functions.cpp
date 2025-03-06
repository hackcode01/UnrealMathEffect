#include "../../../include/algebraic/rational_functions/rational_functions.hpp"

#include <stdexcept>

f64 polynomial(f64 x, const std::vector<f64>& coefficients) {
    if (coefficients.empty()) {
        return 0.0;
    }

    f64 result{0.0};

    for (auto iterator{coefficients.rbegin()}; iterator != coefficients.rend(); ++iterator) {
        result = result * x + *iterator;
    }

    return result;
}

f64 rational(f64 x, const std::vector<f64>& number, const std::vector<f64>& vec_denominator) {
    f64 numerator{polynomial(x, number)};
    f64 denominator{polynomial(x, vec_denominator)};

    if (denominator == 0) {
        throw std::runtime_error{"Деление на ноль"};
    }

    return numerator / denominator;
}
