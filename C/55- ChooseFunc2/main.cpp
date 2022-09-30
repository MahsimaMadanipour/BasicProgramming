#include <stdio.h>

int partialFactorial(int m, int n);
int factorial(int n);
int choose(int n, int r);

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);

    printf("%d choose %d = %d", n, r, choose(n, r));

    return 0;
}

int choose(int n, int r)
{
    if(r < n - r)
        r = n - r;
    return partialFactorial(n, r) / factorial(n - r);
    /*
    if(r >= n - r)
        return partialFactorial(n, r) / factorial(n - r);
    else
        return partialFactorial(n, n - r) / factorial(r);
    */
}

int factorial(int n)
{
    int r = 1;
    for(int i = 2; i <= n; i++)
        r *= i;
    return r;
}

int partialFactorial(int m, int n) //Compute m! / n!
{
    int r = 1;
    for(int i = n + 1; i <= m; i++)
        r *= i;
    return r;
}
