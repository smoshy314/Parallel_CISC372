#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 6

void matrixArrayOfArrays(int n, int m){
    float **col = (float **)malloc(m * sizeof(float*));
    for (int i = 0; i<m; i++){
        col[i] = malloc(n * sizeof(float));
        for(int j = 1; j<=n; j++){
            col[i][j-1] = i+j;
        }
    }
    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            printf("%f", col[i][j]);
        }
        free(col[i]);
        printf("\t");
    }
    free(col);
}


int main(int argc,char** argv){
matrixArrayOfArrays(N,M);
//matrixOneBigArray(N,M);
return 0;
}