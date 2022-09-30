#include <stdio.h>

#define SIZE 10

int main()
{
    int arr[SIZE];

    for(int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    //int maximum = arr[0];
    int maxIdx = 0;

    for(int i = 1; i < SIZE; i++)
        if(arr[i] > arr[maxIdx])//if(arr[i] > maximum)
            maxIdx = i;//maximum = arr[i];

    //printf("Maximum of array is %d", maximum);
    printf("Maximum of array is %d at index %d", arr[maxIdx], maxIdx);
    return 0;
}
