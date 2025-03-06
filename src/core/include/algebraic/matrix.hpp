#ifndef __MAXTRIX_HPP__
#define __MATRIX_HPP__

#pragma warning( disable : 4464 )

#include "../types.hpp"

/* Умножение матриц */
void matrix_multiplication(const f32* a, const f32* b, f32* c,
                 i32 rows_a, i32 cols_a, i32 cols_b);

#endif
