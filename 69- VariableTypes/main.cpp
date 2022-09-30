#include <stdio.h>

int g;
//int MovementNumber;
void f1();
void f2(float *p);
void f3();
void hanoi(int n, char src, char aux, char dest);

int main()
{
    printf("g = %d\n", g);
    f1();
    printf("g = %d\n", g);

    //float f = 3.1415;
    const float PI = 3.14;
    //scanf("%f", &PI);
    printf("PI = %f\n", PI);
    //PI = 3.1415;

    const float *p;
    p = &PI;
    //f2(p);
    float f = 2.6;
    p = &f;
    f = 2.8;
    printf("*p = %f\n", *p);
    //*p = 2.8;
    //*p = 3.1415;

    int m = 3, n = 6;
    const int * const q = &m;
    //*q = 4;
    printf("*q = %d\n", *q);

    f3();
    f3();
    f3();

    hanoi(4, 'A', 'B', 'C');

    return 0;
}

void f1()
{
    g = 20;
    int g;
    g = 30;
}

void f2(float *p)
{
    *p = 3.1415;
}

void f3()
{
    static int n = 10;
    n++;
    printf("n = %d\n", n);
}

void hanoi(int n, char src, char aux, char dest)
{
    static int MovementNumber = 0;
    if(n == 0)
        return;
    hanoi(n - 1, src, dest, aux);
    printf("Movement #%d: Move disk #%d, from %c to %c\n",
            ++MovementNumber, n, src, dest);
    hanoi(n - 1, aux, src, dest);
}

