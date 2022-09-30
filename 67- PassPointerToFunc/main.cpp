#include <stdio.h>

void doub(int);
void doubByPointer(int*);
void mySwap(int*, int*);
int main()
{
    int m = 5, n = 7;
    int *p = &m;

    printf("m = %d\n", m);
    doub(m);
    printf("m = %d\n", m);
    printf("m = %d\n", m);

    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
    doubByPointer(p);
    printf("m = %d\n", m);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);

    printf("m = %d, n = %d\n", m, n);
    mySwap(&m, &n);
    printf("m = %d, n = %d\n", m, n);
    return 0;
}
void doub(int n)
{
    n *= 2;
}
void doubByPointer(int *p)
{
    int t = 12;

    p = &t;
    *p *= 2;
}

void mySwap(int *p, int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
}
