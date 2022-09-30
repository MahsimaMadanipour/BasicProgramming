#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n >= 10 && n < 100)
        if(n % 2 == 1)
            printf("%d is a 2-digit odd number.", n);
        else
            printf("%d is a 2-digit even number.", n);
    else
        printf("%d is not a 2-digit number.", n);
    return 0;
}
