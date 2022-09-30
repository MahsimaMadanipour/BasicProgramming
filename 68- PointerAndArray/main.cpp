#include <stdio.h>
void printArray1(int a[], int n);
void printArray2(int *a, int n);
void printArray3(int *a, int n);
void printArray4(int *a, int n);
void printArray5(int *a, int n);
int main()
{
    int arr[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    int *p;

    p = &arr[6];

    printf("*p = %d\n", *p);
    printf("p = %d\n", p);
    printf("p = %p\n", p);

    p++;

    printf("*p = %d\n", *p);
    printf("p = %d\n", p);
    printf("p = %p\n", p);

    printf("*(p + 2) = %d\n", *(p + 2));

    p -= 6;
    printf("*p = %d\n", *p);
    p += 8;
    printf("*p = %d\n", *p);
    /*
    p++;
    printf("*p = %d\n", *p);
    *p = 6356720;
    printf("*p = %d\n", *p);
    printf("arr[10] = %d\n", arr[10]);
    */
    printf("-----------------------\n");
    //p = &arr[0];
    p = arr;
    printf("*p = %d\n", *p);

    p = arr + 2;
    printf("*p = %d\n", *p);

    printf("*(arr + 5) = %d\n", *(arr + 5));
    printf("arr[5] = %d\n", arr[5]);
    printf("p[5] = %d\n", p[5]);
    printf("p[-1] = %d\n", p[-1]);
    printf("-----------------------\n");
    printArray3(arr, 10);
    printArray1(p, 8);
    printArray5(arr, 10);

    return 0;
}

void printArray1(int a[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d, ", a[i]);
    printf("\n");
}
void printArray2(int *a, int n)
{
    for(int i = 0; i < n; i++)
        printf("%d, ", a[i]);
    printf("\n");
}

void printArray3(int *a, int n)
{
    for(int i = 0; i < n; i++)
        printf("%d, ", *(a + i));
    printf("\n");
}
void printArray4(int *a, int n)
{
    //if(n == 1)
    //{
    //    printf("%d, ", a[0]);
    //    return;
    //}
    if(n == 0)
        return;
    printArray4(a, n - 1);
    printf("%d, ", a[n - 1]);
}
void printArray5(int *a, int n)
{
    if(n == 0)
        return;
    printf("%d, ", *a);
    printArray5(a + 1, n - 1);
}
