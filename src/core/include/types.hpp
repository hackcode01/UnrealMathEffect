#ifndef __TYPES_HPP__
#define __TYPES_HPP__

#include <cstdint>

/**
 * Общие типы данных для различных платформ
 */
namespace types {
    using i8 = int_fast8_t;
    using i16 = int_fast16_t;
    using i32 = int_fast32_t;
    using i64 = int_fast64_t;

    using u8 = unsigned char;
    using u16 = unsigned short;
    using u32 = unsigned int;
    using u64 = unsigned long long;

    using f32 = float;
    using f64 = double;
}

using namespace types;

#endif
