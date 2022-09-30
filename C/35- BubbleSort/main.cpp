#include <stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE] = {7, 0, 2, 9, 1, 8, 4, 3, 6, 5};

    for(int i = 0; i < SIZE; i++)
        printf("%d, ", arr[i]);
    printf("\n");

    for(int i = SIZE - 1; i > 0; i--)
        for(int j = 0; j < i; j++)
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

    for(int i = 0; i < SIZE; i++)
        printf("%d, ", arr[i]);
    printf("\n");
    return 0;
}
