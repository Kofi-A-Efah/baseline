#ifndef __MATRIX_MULTIPLY_HPP
#define __MATRIX_MULTIPLY_HPP
#include <cstdint>

/*
 * This is the most basic single tile version of vector addition
 * that adds two vectors A and B and stores the result in C.
 *
 * The code assumes a sinlge 1x1 grid of a single 1x1 tile group
 * Do NOT use this version with larger tile groups 
 */
template <typename TA, typename TB>
int __attribute__ ((noinline)) kernel_tile_vector_dotprod(TA *A, TB *B,
                      uint32_t WIDTH) {
        // A single tile performs the entire vector dot product.
        float C = 0;
	for (int iter_x = 0; iter_x < WIDTH; iter_x += 1) { 
                C = C + A[iter_x] * B[iter_x];
	}

        return 0;
}

#endif
