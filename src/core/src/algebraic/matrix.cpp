#include "../../include/algebraic/matrix.hpp"

void matrix_multiplication(const f32* a, const f32* b, f32* c,
                 i32 rows_a, i32 cols_a, i32 cols_b) {
    constexpr i32 TILE = 64;

    #pragma omp parallel for collapse(2)

    for (size_t i = 0; i < rows_a; i += TILE) {
        for (size_t j = 0; j < cols_b; j += TILE) {
            for (size_t k = 0; k < cols_a; k += TILE) {
                for (size_t ii = i; ii < i + TILE; ++ii) {
                    for (size_t kk = k; kk < k + TILE; ++kk) {
                        __m256 a = _mm256_set1_ps(a[ii * cols_a + kk]);
                        for (size_t jj = j; jj < j + TILE; jj += 8) {
                            __m256 b = _mm256_loadu_ps(&b[kk * cols_b + jj]);
                            __m256 c = _mm256_loadu_ps(&c[ii * cols_b + jj]);
                            c = _mm256_fmadd_ps(a, b, c);
                            _mm256_storeu_ps(&c[ii * cols_b + jj], c);
                        }
                    }
                }
            }
        }
    }
}
