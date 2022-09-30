#include <stdio.h>

int main()
{
    double t, x, a, sum = 0;
    int  i = 1, b, sign = 1;

    scanf("%lf", &x);
    scanf("%lf", &t);

    a = x;
    b = 1;
    do{
        sum += sign * a / b;
        a *= x * x;
        b *= (i + 1) * (i + 2);
        i += 2;
        sign *= -1;

    } while(t <= a / b);

    printf("sum = %lf", sum);

    return 0;
}
