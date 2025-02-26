#ifndef __LINEAR_FUNCTIONS_HPP
#define __LINEAR_FUNCTIONS_HPP

#include "../types.hpp"

constexpr double PI = 3.14159265358979323846;
constexpr double PI_OVER_2 = PI / 2.0;
constexpr double TWO_PI = 2.0 * PI;

double fastSin(double x) {
    i64 k = static_cast<i64>((x + PI_OVER_2) / PI);
    x = x - k * PI;

    bool negate = false;
    if (x > PI_OVER_2) {
        x = PI - x;
    } else if (x < -PI_OVER_2) {
        x = -PI - x;
        negate = true;
    }

    double x2 = x * x;
    double result = x * (1.0 + x2 * (-0.16666666666666666
                               + x2 * (0.008333333333333333
                               - x2 * 0.0001984126984126984)));

    return negate ? -result : result;
}

f64 fastPow(f64 base, u32 exponent) {
    double result{1.0};

    while (exponent > 0) {
        if (exponent & 1) {
            result *= base;
        }

        base *= base;
        exponent >>= 1;
    }

    return result;
}

/* Function f(x) = mx + b */
f64 linear(f64 x, f64 m, f64 b) {
    return m * x + b;
}

/* Function f(x) = x ^ n */
f64 power(double x, u32 n) {
    return fastPow(x, n);
}

/* Function f(x) = sin(x) */
f64 sine(f64 x) {
    return fastSin(x);
}

#endif
