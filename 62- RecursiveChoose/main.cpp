#include <stdio.h>

int recursiveChoose(int, int);

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d choose %d is %d",
           n, r, recursiveChoose(n, r));
    return 0;
}

int recursiveChoose(int n, int r)
{
    if(r == 0 || r == n)
        return 1;
    return  recursiveChoose(n - 1, r) +
            recursiveChoose(n - 1, r - 1);
}
