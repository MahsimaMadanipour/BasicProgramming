#include <stdio.h>

int main()
{
    int n = 5;
    int *p = &n;

    //p = &n;
    printf("n = %d\n", n);
    printf("*p = %d\n", *p);

    n = 7;

    printf("n = %d\n", n);
    printf("*p = %d\n", *p);

    *p = 12;
    printf("n = %d\n", n);
    printf("*p = %d\n", *p);

    printf("&n = %p\n", &n);
    printf("p = %p\n", p);

    int *q = p;

    printf("q = %p\n", q);

    *q = 4;
    printf("n = %d\n", n);

    return 0;
}
