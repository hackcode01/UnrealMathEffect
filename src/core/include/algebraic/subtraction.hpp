#ifndef __SUBTRACTION_HPP__
#define __SUBTRACTION_HPP__

#include "../types.hpp"

/* Subtraction with signed integer numbers */
fast_i8 subtraction(fast_i8 a, fast_i8 b);
fast_i16 subtraction(fast_i16 a, fast_i16 b);
fast_i32 subtraction(fast_i32 a, fast_i32 b);
fast_i64 subtraction(fast_i64 a, fast_i64 b);

/* Subtraction with unsigned integer numbers */
fast_u8 subtractiond(fast_u8 a, fast_u8 b);
fast_u16 subtraction(fast_u16 a, fast_u16 b);
fast_u32 subtraction(fast_u32 a, fast_u32 b);
fast_u64 subtraction(fast_u64 a, fast_u64 b);

/* Subtraction with floating numbers */
float_32 subtraction(float_32 a, float_32 b);
float_64 subtraction(float_64 a, float_64 b);

#endif
