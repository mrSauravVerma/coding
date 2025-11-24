#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int i, arr[size];
    printf("Enter the element of array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // bubble sort
    int j, temp;
    for (i = 0; i < size-1; i++)
    {
        for (j = 0; j <= size -1 -1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("sorted array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}