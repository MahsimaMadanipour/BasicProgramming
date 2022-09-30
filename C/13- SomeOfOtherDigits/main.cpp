#include <stdio.h>

int main()
{
    int n, s1 = 0, s2 = 0;
    scanf("%d", &n);
    while(n > 0)
    {
        s1 += n % 10;
        n /= 10;
        s2 += n % 10;
        n /= 10;
    }
    printf("s1 = %d, s2 = %d", s1, s2);
    return 0;
}
