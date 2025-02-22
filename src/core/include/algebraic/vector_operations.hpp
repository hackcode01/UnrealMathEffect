#ifndef __VECTOR_OPERATIONS_HPP__
#define __VECTOR_OPERATIONS_HPP__

#include "../types.hpp"

#include <immintrin.h>
#include <cstdint>

/* Addition of vectors */
void add_vectors(f32* a, f32* b, f32* result, size_t count);

/* Scalar product of vectors */
f32 scalar_dot_product(const f32* a, const f32* b, size_t count);

#endif
