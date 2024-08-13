#include <stdio.h>

void input_array(int s)
{
    int arr[20];
    for (int i = 0; i < s; i++)
    {
        printf("Enter the element array[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < s; i++)
    {
        printf("array[%d] : %d\n", i, arr[i]);
    }
    return ;
}
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    input_array(size);
    return 0;
}