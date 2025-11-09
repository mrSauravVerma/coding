#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i, count;
    printf("Enter a number for table : ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        count = num * i;
        printf("%d * %d : %d \n", num, i, count);
    }
    return 0;
}