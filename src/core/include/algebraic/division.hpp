#ifndef __DIVISION_HPP__
#define __DIVISION_HPP__

#include "../types.hpp"

/* Division with signed integer numbers */
i8 division(i8 a, i8 b);
short division(short a, short b);
i32 division(i32 a, i32 b);
i64 division(i64 a, i64 b);

/* Division with unsigned integer numbers */
u8 division(u8 a, u8 b);
u16 division(u16 a, u16 b);
u32 division(u32 a, u32 b);
u64 division(u64 a, u64 b);

/* Division with floating numbers */
f32 division(f32 a, f32 b);
f64 division(f64 a, f64 b);

#endif
