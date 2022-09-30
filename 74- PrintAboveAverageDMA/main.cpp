#include <stdio.h>
#include <malloc.h>

int main()
{
    float *marks, sum = 0, average;
    int n;

    printf("Enter number of marks: ");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Number of mark must be positive");
        return 0;
    }

    marks = (float *)malloc(n * sizeof(float));

    for(int i = 0; i < n; i++)
    {
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    average = sum / n;
    printf("Average is %f\n", average);
    printf("List of marks above average:\n");
    for(int i = 0; i < n; i++)
        if(marks[i] >= average)
            printf("%f\n", marks[i]);

    free(marks);

    return 0;
}
