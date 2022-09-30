#include <stdio.h>

int factorial(int);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d! = %d", n, factorial(n));
    return 0;
}

int factorial(int n)
{
    int r = 1;
    for(int i = 2; i <= n; i++)
        r *= i;
    return r;
}
