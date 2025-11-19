#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, num;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the number to search : ");
    scanf("%d", &num);
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            printf("%d find of index %d in array.", num, arr[i-1]);
            break;
        }
    }
    return 0;
}