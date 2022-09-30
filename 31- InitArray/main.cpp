#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int c[10] = {0};
    //int d[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};//ERROR!
    int d[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    for(int i = 0; i < 10; i++)
        printf("%d, ", a[i]);
    printf("\n");

    for(int i = 0; i < 10; i++)
        printf("%d, ", b[i]);
    printf("\n");

    for(int i = 0; i < 10; i++)
        printf("%d, ", c[i]);
    printf("\n");

    for(int i = 0; i < 10; i++)
        printf("%d, ", d[i]);
    printf("\n");

    return 0;
}
