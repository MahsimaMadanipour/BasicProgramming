#include <stdio.h>

int main()
{
    int a = 7, b = 3, r;

    printf("a = %d\n", a);

    r = a += b;
    printf("a = %d\n", a);
    printf("r = %d\n", r);

    a -= b;
    printf("a = %d\n", a);

    a *= b;
    printf("a = %d\n", a);

    a /= b;
    printf("a = %d\n", a);

    a /= 2;
    printf("a = %d\n", a);

    a %= 3;
    printf("a = %d\n", a);

    a = 8;
    a++;
    printf("a = %d\n", a);
    a--;
    printf("a = %d\n", a);
    ++a;
    printf("a = %d\n", a);
    --a;
    printf("a = %d\n", a);

    r = a++;
    printf("a = %d\n", a);
    printf("r = %d\n", r);

    r = a--;
    printf("a = %d\n", a);
    printf("r = %d\n", r);

    r = ++a;
    printf("a = %d\n", a);
    printf("r = %d\n", r);

    r = --a;
    printf("a = %d\n", a);
    printf("r = %d\n", r);

    printf("a = %d\n", a++);
    printf("a = %d\n", ++a);

    printf("a = %d\n", a--);
    printf("a = %d\n", --a);


    return 0;
}
