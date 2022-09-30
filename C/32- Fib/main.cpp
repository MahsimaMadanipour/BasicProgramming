#include <stdio.h>

int main()
{
    int n;
    int a, b, c;
    scanf("%d", &n);
    if(n >= 0)
        printf("fib[%d] = %d\n", 0, 0);
    if(n >= 1)
        printf("fib[%d] = %d\n", 1, 1);
    a = 0;
    b = 1;
    for(int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("Fib[%d] = %d\n", i, c);
    }

    return 0;
}
