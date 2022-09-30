#include <stdio.h>

int main()
{
    int n, m, r = 0;

    scanf("%d", &n);
    m = n;
    while(m > 0)
    {
        r *= 10;
        r += m % 10;
        m /= 10;
    }
    printf("Reverse of %d is %d", n, r);
    return 0;
}
