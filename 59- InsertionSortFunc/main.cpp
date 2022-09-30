#include <stdio.h>

void InsertionSort(int arr[], int arraySize);
void printArray(int arr[], int arraySize);
void insertElement(int arr[], int idx);
void insertElement_old(int arr[], int idx);

int main()
{
    int a[] = {8, 1, 3, 0, 5, 4, 6, 9, 7, 2};
    printArray(a, sizeof(a) / sizeof(int));
    InsertionSort(a, sizeof(a) / sizeof(int));
    printArray(a, sizeof(a) / sizeof(int));


    return 0;
}

void InsertionSort(int arr[], int arraySize)
{
    for(int i = 1; i < arraySize; i++)
        insertElement(arr, i);
    return;
}

void insertElement_old(int arr[], int idx)
{
    int temp;
    while(idx > 0 && arr[idx - 1] > arr[idx])
    {
        temp = arr[idx];
        arr[idx] = arr[idx - 1];
        arr[idx - 1] = temp;
        idx--;
    }
    return;
}

void insertElement(int arr[], int idx)
{
    int temp = arr[idx];
    while(idx > 0 && arr[idx - 1] > temp)
    {
        arr[idx] = arr[idx - 1];
        idx--;
    }
    arr[idx] = temp;
    return;
}

void printArray(int arr[], int arraySize)
{
    for(int i = 0; i < arraySize; i++)
        printf("%d, ", arr[i]);
    printf("\n");
    return;
}
