#ifndef __ADDITION_HPP__
#define __ADDITION_HPP__

#include "../types.hpp"

/* Addition with signed integer numbers */
fast_i8 addition(fast_i8 a, fast_i8 b);
fast_i16 addition(fast_i16 a, fast_i16 b);
fast_i32 addition(fast_i32 a, fast_i32 b);
fast_i64 addition(fast_i64 a, fast_i64 b);

/* Addition with unsigned integer numbers */
fast_u8 addition(fast_u8 a, fast_u8 b);
fast_u16 addition(fast_u16 a, fast_u16 b);
fast_u32 addition(fast_u32 a, fast_u32 b);
fast_u64 addition(fast_u64 a, fast_u64 b);

/* Addition with floating numbers */
float_32 addition(float_32 a, float_32 b);
float_64 addition(float_64 a, float_64 b);

#endif
