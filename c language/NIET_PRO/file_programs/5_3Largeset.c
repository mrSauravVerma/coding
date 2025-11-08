#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter the numbers A,B and C : ");
    scanf("%d%d%d", &a, &b, &c);
    if ((a > b) && (a > c))
    {
        printf("A is largest number");
    }
    else if ((b > a) && (b > c))
    {
        printf("B is largest number");
    }
    else
    {
        printf("c is largest number");
    }
    getch();
    return 0;
}