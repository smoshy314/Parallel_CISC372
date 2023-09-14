#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 6

void matrixArrayOfArrays(int n, int m){
    int counter = 1;
    float **col = (float **)malloc(m * sizeof(float*));
    for (int i = 0; i<m; i++){
        col[i] = malloc(n * sizeof(float));
        for(int j = 1; j<=n; j++){
            col[i][j-1] = counter;
            counter++;
        }
    }
    //Like matrix
    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            printf("%f\t", col[i][j]);
        }
        printf("\n");
    }
    //Transposed
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            printf("%f\t", col[j][i]);
        }
        printf("\n");
    }
    for (int i = 0; i<m; i++){
        free(col[i]);
    }
    free(col);

}

void matrixOneBigArray(int n, int m){

}

int main(int argc,char** argv){
matrixArrayOfArrays(N,M);
matrixOneBigArray(N,M);
return 0;
}