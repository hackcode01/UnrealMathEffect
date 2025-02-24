#ifndef __ADDITION_HPP__
#define __ADDITION_HPP__

#include "../types.hpp"

/* Addition with signed integer numbers */
i8 addition(i8 a, i8 b);
short addition(short a, short b);
i32 addition(i32 a, i32 b);
i64 addition(i64 a, i64 b);

/* Addition with unsigned integer numbers */
u8 addition(u8 a, u8 b);
u16 addition(u16 a, u16 b);
u32 addition(u32 a, u32 b);
u64 addition(u64 a, u64 b);

/* Addition with floating numbers */
f32 addition(f32 a, f32 b);
f64 addition(f64 a, f64 b);

#endif
