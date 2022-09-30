#include <stdio.h>

int main()
{
    int n, m, sum = 0;

    scanf("%d", &n);
    m = n;
    while(m > 0)
    {
        sum += m % 10;
        m /= 10;
    }
    printf("Sum of digits of %d is %d", n, sum);
    return 0;
}
