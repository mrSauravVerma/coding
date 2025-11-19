#include <stdio.h>
int main()
{
    int i, num, size;

    printf("Enter the size of array : ");
    scanf("%d", &size);
    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter arr[%d] : ",i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search : ");
    scanf("%d", &num);
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            printf("%d find of index %d in array.", num,i);
            break;
        }
    }
    return 0;
}