#include <stdio.h>

int factorial(int);
int choose(int, int);

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d choose %d = %d",
           n, r, choose(n, r));
    return 0;
}

int factorial(int n)
{
    int r = 1;
    for(int i = 2; i <= n; i++)
        r *= i;
    return r;
}

int choose(int n, int r)
{
    return factorial(n) /
        (factorial(r) * factorial(n - r));
}
