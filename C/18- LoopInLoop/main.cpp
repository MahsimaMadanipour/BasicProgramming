#include <stdio.h>

int main()
{
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            printf("%d\n", 10 * i + j);
    return 0;
}
