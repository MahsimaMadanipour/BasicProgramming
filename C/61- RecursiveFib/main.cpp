#include <stdio.h>
int recursiveFib(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("fib[%d] = %d", n, recursiveFib(n));
    return 0;
}

int recursiveFib(int n)
{
    if(n == 0 || n == 1)
        return n;
    return recursiveFib(n - 1) +
           recursiveFib(n - 2);
}
