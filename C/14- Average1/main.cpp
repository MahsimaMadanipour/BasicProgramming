#include <stdio.h>

int main()
{
    float mark, sum = 0;
    int   counter = 0;

    scanf("%f", &mark);
    while(mark >= 0)
    {
        sum += mark;
        counter++;
        scanf("%f", &mark);
    }

    if(counter)//(counter > 0)
        printf("Average = %f", sum / counter);
    else
        printf("No number!");
    return 0;
}
