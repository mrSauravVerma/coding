//ENTER THE MATRIX IN RUN TIME
#include<stdio.h>
int main()
{
    int r,c,a[20][20];
    printf("enter the number of ROW : ");
    scanf("%d",&r);

    printf("\nEnter the number of coloumn : ");
    scanf("%d",&c);

    for( int i=0 ; i<r ; i++ )
    {
        for( int j=0 ; j<c ; j++)
        {
            printf("\na[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("this is your matrix\n");
    
    for( int i=0 ; i<r ; i++ )
    {
        for( int j=0 ; j<c ; j++)
        {
            printf(" %d\t ",a[i][j]);
        }
        printf("\n");
    }
    
return 0;
}