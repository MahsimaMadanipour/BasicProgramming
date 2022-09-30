#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    float marks[MAX_SIZE], sum = 0, average;
    int n;

    printf("Enter number of marks(Max %d): ", MAX_SIZE);
    scanf("%d", &n);
    if(n > MAX_SIZE)
    {
        printf("Number of mark cannot be more than %d.\n", MAX_SIZE);
        n = MAX_SIZE;
    }

    for(int i = 0; i < n; i++)
    {
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    if(!n)
    {
        printf("No number!");
        return 0;
    }

    average = sum / n;
    printf("Average is %f\n", average);
    printf("List of marks above average:\n");
    for(int i = 0; i < n; i++)
        if(marks[i] >= average)
            printf("%f\n", marks[i]);

    return 0;
}
