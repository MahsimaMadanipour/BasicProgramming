#include <stdio.h>

int main()
{
    int a, b, c, maximum;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a >= b)
        maximum = a;
    else
        maximum = b;
    if(maximum < c)
        maximum = c;

    printf("Maximum of %d and %d and %
           d is %d",
           a, b, c, maximum);
    return 0;
}
