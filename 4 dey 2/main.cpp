#include <stdio.h>
#define M 2
#define N 3
#define P 5

void printMatrix(int[][4], int, int);

int main()
{
    int A[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int B[3][4] = {{1, 2, 3, 4},
                    {5},
                    {9, 10}};

    /*printf("A: \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j ++)
            printf("%5d", A[i][j]);
        printf("\n");
    }
    printf("B: \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j ++)
            printf("%5d", B[i][j]);
        printf("\n");
    }*/

    printf("A: \n");
    printMatrix(A, 3, 4);
    printf("B: \n");
    printMatrix(B, 3, 4);
    return 0;
}

void printMatrix(int M[][], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%5d", M[i][j]);
        printf("\n");
    }
}
