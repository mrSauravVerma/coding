#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};

    printf("This is simple array : ");
    for( int i=0 ; i<5 ; i++)
    {
        printf("\narray[%d] : %d",i, arr[i]);
    }
    printf("\nthis is reverse array : ");
    for( int i=4 ; i>=0 ; i-- )
    {
        printf("\narray[%d] : %d", i , arr[i]);
    }
    return 0;
}