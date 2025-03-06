#include "../../../include/algebraic/rational_functions/Polynomial.hpp"

f64 Polynomial::evaluate(f64 x) const {
    double result{0.0};

    for (auto iterator = m_coefficients.rbegin(); iterator != m_coefficients.rend(); ++iterator) {
        result = result * x + *iterator;
    }

    return result;
}
