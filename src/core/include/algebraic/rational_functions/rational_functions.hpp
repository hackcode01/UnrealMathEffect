#ifndef __RATIONAL_FUNCTIONS_HPP__
#define __RATIONAL_FUNCTIONS_HPP__

#include "./Polynomial.hpp"

f64 polynomial(f64 x, const std::vector<f64>& coefficients);

f64 rational(f64 x, const std::vector<f64>& number, const std::vector<f64>& vec_denominator);

#endif
