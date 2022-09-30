#include <stdio.h>

int main()
{
    int n = 1000000, sum;
    //scanf("%d", &n);

    for(int i = 2; i <= n; i++)
    {
        //printf("\r%d", i);
        sum = 0;
        for(int j = 1; j * j <= i; j++)
            if(i % j == 0)
            {
                sum += j;
                if(j != 1 && j * j != i)
                    sum += i / j;
            }
        if(sum == i)
            printf("\r%d\n", i);
    }
    //printf("\r             ");
    return 0;
}
