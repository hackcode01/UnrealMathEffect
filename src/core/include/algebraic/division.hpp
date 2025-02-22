#ifndef __DIVISION_HPP__
#define __DIVISION_HPP__

#include "../types.hpp"

/* Division with signed integer numbers */
fast_i8 division(fast_i8 a, fast_i8 b);
short division(short a, short b);
fast_i32 division(fast_i32 a, fast_i32 b);
fast_i64 division(fast_i64 a, fast_i64 b);

/* Division with unsigned integer numbers */
fast_u8 division(fast_u8 a, fast_u8 b);
fast_u16 division(fast_u16 a, fast_u16 b);
fast_u32 division(fast_u32 a, fast_u32 b);
fast_u64 division(fast_u64 a, fast_u64 b);

/* Division with floating numbers */
f32 division(f32 a, f32 b);
f64 division(f64 a, f64 b);

#endif
