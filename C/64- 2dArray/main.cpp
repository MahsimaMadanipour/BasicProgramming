#include <stdio.h>

void printMatrix(int[][4], int, int);

int main()
{
    int A[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int B[3][4] = {{1, 2, 3, 4},
                   {5},
                   {9, 10}};

    printf("A: \n");
    printMatrix(A, 3, 4);
    printf("B: \n");
    printMatrix(B, 3, 4);
    return 0;
}

void printMatrix(int M[][4], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%5d", M[i][j]);
        printf("\n");
    }
}
