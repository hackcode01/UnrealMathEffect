#ifndef __MULTIPLICATION_HPP__
#define __MULTIPLICATION_HPP__

#include "../types.hpp"

/* Multiplication with signed integer numbers */
fast_i8 multiplication(fast_i8 a, fast_i8 b);
fast_i16 multiplication(fast_i16 a, fast_i16 b);
fast_i32 multiplication(fast_i32 a, fast_i32 b);
fast_i64 multiplication(fast_i64 a, fast_i64 b);

/* Multiplication with unsigned integer numbers */
fast_u8 multiplication(fast_u8 a, fast_u8 b);
fast_u16 multiplication(fast_u16 a, fast_u16 b);
fast_u32 multiplication(fast_u32 a, fast_u32 b);
fast_u64 multiplication(fast_u64 a, fast_u64 b);

/* Multiplication with floating numbers */
float_32 multiplication(float_32 a, float_32 b);
float_64 multiplication(float_64 a, float_64 b);

#endif
