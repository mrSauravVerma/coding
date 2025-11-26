#include <stdio.h>
int main()
{
    int arr[6] = {5, 4, 3, 7, 2, 9};
    int i, j, min;
    for (i = 0; i < 5; i++)
    {
        min = i;
        for (j = i + 1; j < 6; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for (i = 0; i < 6; i++)
    {
        printf("arr[%d] : %d\n", i, arr[i]);
    }
    return 0;
}