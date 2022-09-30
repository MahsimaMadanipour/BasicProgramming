#include <stdio.h>
#define M 2
#define N 3
#define P 5

void printMatrix(int[][N], int, int);
void printMatrix2(int[][P], int, int);

int main()
{
    int A[M][N] = { {1, 2, 3},
                    {4, 5, 6}};
    int B[M][N] = { {2, 0, 4},
                    {1, 2, 0}};
    int C[M][N];

    int D[N][P] = { {1, 2, 1, 0, 2},
                    {2, 3, 1, 1, 0},
                    {1, 1, 1, 0, 2} };
    int E[M][P] = {0};

    printf("A: \n");
    printMatrix(A, M, N);
    printf("B: \n");
    printMatrix(B, M, N);

    for(int i = 0; i < M; i++)
        for(int j = 0; j < N; j++)
            C[i][j] = A[i][j] + B[i][j];
    printf("C: \n");
    printMatrix(C, M, N);

    for(int i = 0; i < M; i++)
        for(int j = 0; j < P; j++)
            for(int k = 0; k < N; k++)
                E[i][j] += A[i][k] * D[k][j];

    printf("D: \n");
    printMatrix2(D, N, P);

    printf("E: \n");
    printMatrix2(E, M, P);

    return 0;
}

void printMatrix(int A[][N], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%5d", A[i][j]);
        printf("\n");
    }
}
void printMatrix2(int A[][P], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf("%5d", A[i][j]);
        printf("\n");
    }
}
