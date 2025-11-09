#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i, sum, nSum = 0, oSum = 1;
    printf("Enter number of sequence : ");
    scanf("%d", &num);
    printf("0 1 ");
    for (i = 1; i < num - 1; i++)
    {
        sum = nSum + oSum;
        nSum = oSum;
        oSum = sum;

        printf("%d ", sum);
    }
}