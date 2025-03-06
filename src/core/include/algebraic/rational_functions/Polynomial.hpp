#ifndef __POLYNOMIAL_HPP__
#define __POLYNOMIAL_HPP__

#include "../../types.hpp"

#include <vector>

class Polynomial {

public:
    Polynomial(const std::vector<f64>& coefficients)
        : m_coefficients{coefficients} {}

    f64 evaluate(f64 x) const;

private:
    std::vector<f64> m_coefficients{};
};

#endif
