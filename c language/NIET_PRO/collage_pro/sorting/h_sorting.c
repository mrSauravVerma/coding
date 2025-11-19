#include <stdio.h>

int main()
{
    int size, i, j, temp;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the element of array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for (i = 0; i < size - 1; i++) // 0,1
    {
        for (j = 0; j < size - i - 1; j++)//0 
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
