#include <stdio.h>

int reverseNum(int n);

int main()
{
    int n;
    scanf("%d", &n);
    int m = reverseNum(n);
    printf("Reverse of %d is %d", n, m);
    return 0;
}

int reverseNum(int n)
{
    int r = 0;
    while(n)
    {
        r *= 10;
        r += n % 10;
        n /= 10;
    }
    return r;
}
