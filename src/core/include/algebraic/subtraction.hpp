#ifndef __SUBTRACTION_HPP__
#define __SUBTRACTION_HPP__

#include "../types.hpp"

/* Subtraction with signed integer numbers */
i8 subtraction(i8 a, i8 b);
short subtraction(short a, short b);
i32 subtraction(i32 a, i32 b);
i64 subtraction(i64 a, i64 b);

/* Subtraction with unsigned integer numbers */
u8 subtractiond(u8 a, u8 b);
u16 subtraction(u16 a, u16 b);
u32 subtraction(u32 a, u32 b);
u64 subtraction(u64 a, u64 b);

/* Subtraction with floating numbers */
f32 subtraction(f32 a, f32 b);
f64 subtraction(f64 a, f64 b);

#endif
