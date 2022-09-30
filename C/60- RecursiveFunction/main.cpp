#include <stdio.h>

double power(double a, unsigned int b);
double recursivePower(double a, unsigned int b);
int factorial(unsigned int n);
int recursiveFactorial(unsigned int n);

int main()
{
    unsigned int n;
    double f;
    scanf("%lf %u", &f, &n);
    printf("%.2lf ^ %u = %.2lf\n", f, n, recursivePower(f, n));
    scanf("%u", &n);
    printf("%u! = %d\n", n, recursiveFactorial(n));

    return 0;
}

double power(double a, unsigned int b)
{
    double r = 1;
    for(unsigned int i = 0; i < b; i++)
        r *= a;
    return r;
}

int factorial(unsigned int n)
{
    int r = 1;
    for(unsigned int i  = 2; i <= n; i++)
        r *= i;
    return r;
}

double recursivePower(double a, unsigned int b)
{
    if(b == 0)
        return 1;
    return a * recursivePower(a, b - 1);
}

int recursiveFactorial(unsigned int n)
{
    if(n == 0)
        return 1;
    return n * recursiveFactorial(n - 1);
}
