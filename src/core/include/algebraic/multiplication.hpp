#ifndef __MULTIPLICATION_HPP__
#define __MULTIPLICATION_HPP__

#include "../types.hpp"

/* Multiplication with signed integer numbers */
fast_i8 multiplication(fast_i8 a, fast_i8 b);
short multiplication(short a, short b);
fast_i32 multiplication(fast_i32 a, fast_i32 b);
fast_i64 multiplication(fast_i64 a, fast_i64 b);

/* Multiplication with unsigned integer numbers */
fast_u8 multiplication(fast_u8 a, fast_u8 b);
fast_u16 multiplication(fast_u16 a, fast_u16 b);
fast_u32 multiplication(fast_u32 a, fast_u32 b);
fast_u64 multiplication(fast_u64 a, fast_u64 b);

/* Multiplication with floating numbers */
f32 multiplication(f32 a, f32 b);
f64 multiplication(f64 a, f64 b);

#endif
