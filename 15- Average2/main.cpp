#include <stdio.h>

int main()
{
    float mark, sum = 0;
    int   counter = 0, n;

    printf("Enter number of marks: ");
    scanf("%d", &n);

    while(counter < n)
    {
        scanf("%f", &mark);
        sum += mark;
        counter++;
    }

    if(counter)
        printf("Average is %f", sum / counter);
    else
        printf("No number!");

    return 0;
}
