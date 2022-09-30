#include <stdio.h>

int main()
{
    int counter = -1;
    float mark, sum = 0;

    do{
        scanf("%f", &mark);
        sum += mark;
        counter++;
    }while(mark >= 0);

    sum -= mark;

    if(counter > 0)
        printf("Average is %f", sum / counter);
    else
        printf("No number!");
    return 0;
}
