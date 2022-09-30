#include <stdio.h>
#define MAX_SIZE 50

int main()
{
    int n;
    int fib[MAX_SIZE];

    scanf("%d", &n);
    if(n > MAX_SIZE - 1)
        n = MAX_SIZE - 1;

    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i <= n; i++)
        fib[i] = fib [i - 1] + fib [i - 2];

    for(int i = 0; i <= n; i++)
        printf("Fib[%02d] = %d\n", i, fib[i]);

    return 0;
}
