#include <stdio.h>  // printf
#include "multiply_matrix.h"


void print_matrix(const double* A, size_t n, size_t m, const char* format){
    size_t i,j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf(format, A[rowidx(i,j,m)] );
        }
        printf("\n");
    }
}


int main()
{
    size_t q = 2;
    size_t r = 3;
    size_t s = 4;
    
    
    double A[] = {1, 2, 3, 4, 5, 6}; //q*r
    double B[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; //r*s
    double C[q*s];
    
    multiply_matrix(A,B,C, q,r,s);
    
    print_matrix(C, q, s, "%.f ");
}
