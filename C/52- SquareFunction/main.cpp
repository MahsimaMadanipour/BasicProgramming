#include <stdio.h>

double square(double f);

int main()
{
    double a, b;
    scanf("%lf", &a);
    b = square(a);
    printf("%lf ^ 2 = %lf\n", a, b);

    printf("7 ^ 2 = %d\n", (int)square(7));

    return 0;
}

double square(double f)
{
    double r = f * f;
    f = 0;
    return r;
}
