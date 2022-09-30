#include <stdio.h>

int main()
{
    float mark, sum = 0;
    int   counter, n;

    printf("Enter number of marks: ");
    scanf("%d", &n);

    for(counter = 0; counter < n; counter++)
    {
        scanf("%f", &mark);
        sum += mark;
    }

    if(counter)
        printf("Average is %f", sum / counter);
    else
        printf("No number!");

    return 0;
}
