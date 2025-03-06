#include "../../include/algebraic/vector_operations.hpp"

void add_vectors(f32* a, f32* b, f32* result, size_t count) {
    for (size_t i = 0; i < count; ++i) {
        result[i] = a[i] + b[i];
    }
}

f32 scalar_dot_product(const f32* a, const f32* b, size_t count) {
    f32 sum = 0.0f;

    for (size_t i = 0; i < count; ++i) {
        sum += a[i] * b[i];
    }

    return sum;
}
