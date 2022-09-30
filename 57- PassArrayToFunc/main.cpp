#include <stdio.h>
int arraySum(int arr[], int arraySize);
void printArray(int arr[], int arraySize);
void twiceArray(int[], int);

int main()
{
    int a[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

    int sum = arraySum(a, sizeof(a) / sizeof(int));
    printf("Sum of elements in array is %d\n", sum);

    //printArray(a, 150);
    printArray(a, sizeof(a) / sizeof(int));
    twiceArray(a, sizeof(a) / sizeof(int));
    printArray(a, sizeof(a) / sizeof(int));

    return 0;
}

int arraySum(int arr[], int arraySize)
{
    int sum = 0;
    for(int i = 0; i < arraySize; i++)
        sum += arr[i];
    return sum;
}

void printArray(int arr[], int arraySize)
{
    for(int i = 0; i < arraySize; i++)
        printf("arr[%d] = %d\n", i, arr[i]);
    return;
}

void twiceArray(int arr[], int arraySize)
{
    for(int i = 0; i < arraySize; i++)
        arr[i] *= 2;
    return;
}
