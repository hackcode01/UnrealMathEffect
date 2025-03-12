#pragma warning(disable : 4464)

#include "../../include/algebraic/matrix.hpp"

#include <cmath>

/* Вычисление минимального значения */
i32 min(i32 a, i32 b) {
    return ((a < b) ? a : b);
}

void matrix_multiplication(const f32* a, const f32* b, f32* c,
                           i32 rows_a, i32 columns_a, i32 columns_b) {
    constexpr i32 TILE = 64;

    #pragma omp parallel for collapse(2)

    for (i32 i = 0; i < rows_a; i += TILE) {
        for (i32 j = 0; j < columns_b; j += TILE) {
            for (i32 k = 0; k < columns_a; k += TILE) {
                for (i32 ii = i; ii < min(i + TILE, rows_a); ++ii) {
                    for (i32 kk = k; kk < min(k + TILE, columns_a); ++kk) {
                        float a_val = a[ii * columns_a + kk];
                        for (i32 jj = j; jj < min(j + TILE, columns_b); ++jj) {
                            c[ii * columns_b + jj] += a_val * b[kk * columns_b + jj];
                        }
                    }
                }
            }
        }
    }
}
