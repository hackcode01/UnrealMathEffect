#ifndef __POLYNOMIAL_HPP__
#define __POLYNOMIAL_HPP__

#include "../../types.hpp"

#include <vector>

class Polynomial {

public:
    Polynomial(const std::vector<f64>& coefficients)
        : m_coefficients{coefficients} {}

    f64 evaluate(f64 x) const {
        double result{0.0};

        for (auto iterator = m_coefficients.rbegin(); iterator != m_coefficients.rend(); ++iterator) {
            result = result * x + *iterator;
        }

        return result;
    }

private:
    std::vector<f64> m_coefficients{};
};

#endif
