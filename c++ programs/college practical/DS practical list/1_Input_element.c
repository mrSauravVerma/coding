#include<stdio.h>
int main()
{
    int arr[20],size;
    printf("Enter the size : ");
    scanf("%d",&size);
    for( int i=0 ; i<size ; i++)
    {
        printf("Enter alement array[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    for( int i=0 ; i<size ; i++)
    {
        printf("\n array[%d]=%d",i,arr[i]);
    }
    return 0;
}