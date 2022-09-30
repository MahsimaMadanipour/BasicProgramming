#include <stdio.h>

int main()
{
    double t, sum = 0;
    int  i = 1, sign = 1;

    scanf("%lf", &t);

    do{
        sum += sign * 4.0 / i;
        i += 2;
        sign *= -1;
    } while(t <= 4.0 / i);

    printf("sum = %.10lf", sum);

    return 0;
}
