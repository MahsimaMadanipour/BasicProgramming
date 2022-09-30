#include <stdio.h>

int main()
{
    int n, a, b, c;
    scanf("%d", &n);

    if(n < 100 || n >= 1000)
    {
        printf("%d is not a 3-digit number.", n);
        return 0;
    }

    a = n % 10;
    c = n / 10;
    b = c % 10;
    c /= 10;
    printf("Sum of digits of %d is %d.", n, a + b + c);
    return 0;
}
