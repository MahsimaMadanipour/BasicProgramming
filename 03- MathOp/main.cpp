#include <stdio.h>

int main()
{
    int a = 13, b = 5, r;

    r = a + b;
    printf("r = %d\n", r);

    r = a - b;
    printf("r = %d\n", r);

    r = a * b;
    printf("r = %d\n", r);

    r = a / b;
    printf("r = %d\n", r);

    r = a % b;
    printf("r = %d\n", r);

    r = -a;
    printf("r = %d\n", r);

    float f = 9.2, g = 3.3, h;

    h = f + g;
    printf("h = %f\n", h);

    h = f - g;
    printf("h = %f\n", h);

    h = f * g;
    printf("h = %f\n", h);

    h = f / g;
    printf("h = %f\n", h);

    r = h;
    printf("r = %d\n", r);

    h = r;
    printf("h = %f\n", h);

    h = f / b;
    printf("h = %f\n", h);

    r = f / g;
    printf("r = %d\n", r);

    r = a = b;
    printf("r = %d, a = %d\n", r, a);

    return 0;
}
