#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n == 0)
        printf("n is zero");
    else if(n == 1)
        printf("n is one");
    else if(n == 2)
        printf("n is two");
    else if(n == 3)
        printf("n is three");
    else if(n == 4)
        printf("n is four");
    else if(n == 5)
        printf("n is five");
    else
        printf("n is out of range.");

    return 0;
}
