#include <stdio.h>
#include <conio.h>
int main()
{
    int i, sum = 0, num;
    printf("Enter a number : ");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        sum += i;
    }
    printf("sum of %d numbers : %d", num, sum);
    return 0;
}