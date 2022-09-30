#include <stdio.h>

void sortArray(int arr[], int arraySize);
void printArray(int arr[], int arraySize);

int main()
{
    int a[] = {8, 1, 3, 0, 5, 4, 6, 9, 7, 2};
    printArray(a, sizeof(a) / sizeof(int));
    sortArray(a, sizeof(a) / sizeof(int));
    printArray(a, sizeof(a) / sizeof(int));

    return 0;
}

void sortArray(int arr[], int arraySize)
{
    for(int i = arraySize - 1; i > 0; i--)
        for(int j = 0; j < i; j++)
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    return;
}

void printArray(int arr[], int arraySize)
{
    for(int i = 0; i < arraySize; i++)
        printf("%d, ", arr[i]);
    printf("\n");
    return;
}
