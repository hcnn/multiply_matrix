#include "multiply_matrix.h"

// A[rowidx(i,j, r)]
// B[rowidx(j,k, s)]
// C[rowidx(i,k, s)]
void multiply_matrix(const double* A, const double* B, double* C, size_t q, size_t r, size_t s)
{
    size_t i,j,k;
    for(i=0; i<q; i++){
        for(k=0; k<s; k++){
            C[rowidx(i,k, s)] = 0.0;
            for(j=0; j<r; j++){
                C[rowidx(i,k, s)] += A[rowidx(i,j, r)] * B[rowidx(j,k, s)];
            }
        }
    }
}

