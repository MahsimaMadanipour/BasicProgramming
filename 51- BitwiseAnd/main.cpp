#include <stdio.h>

int main()
{
    int m, n;
    int s, c, t;
    scanf("%d %d", &m, &n);

    s = m ^ n;
    c = m & n;

    while(c)
    {
        printf("s = %d, c = %d\n", s, c);
        c <<= 1;
        t = s;
        s = s ^ c;
        c = t & c;
    }

    printf("%d + %d = %d", m, n, s);

    return 0;
}
