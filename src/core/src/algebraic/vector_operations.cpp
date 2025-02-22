#include "../../include/algebraic/vector_operations.hpp"

void add_vectors(f32* a, f32* b, f32* result, size_t count) {
    size_t i = 0;
    constexpr size_t simd_size = 8;
    while (i + simd_size <= count) {
        __m256 av = _mm256_load_ps(a + i);
        __m256 bv = _mm256_load_ps(b + i);
        __m256 rv = _mm256_add_ps(av, bv);
        _mm256_store_ps(result + i, rv);

        i += simd_size;
    }

    while (i < count) {
        result[i] = a[i] + b[i];

        ++i;
    }
}

f32 scalar_dot_product(const f32* a, const f32* b, size_t count) {
    __m256 sum = _mm256_setzero_ps();
    size_t i = 0;

    while (i + 8 <= count) {
        __m256 av = _mm256_loadu_ps(a + i);
        __m256 bv = _mm256_loadu_ps(b + i);
        sum = _mm256_fmadd_ps(av, bv, sum);

        i += 8;
    }

    float temp[8]{};
    _mm256_storeu_ps(temp, sum);
    float result = temp[0] + temp[1] + temp[2] + temp[3] +
                   temp[4] + temp[5] + temp[6] + temp[7];

    while (i < count) {
        result += a[i] * b[i];

        ++i;
    }

    return result;
}
