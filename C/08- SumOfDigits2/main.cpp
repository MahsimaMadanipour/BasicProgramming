#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);

    if(n < 10 || n >= 100)
    {
        printf("%d is not a 2-digit number.", n);
        return 0;
    }

    a = n / 10;
    b = n % 10;
    printf("Sum of digits of %d is %d.", n, a + b);
    return 0;
}
