#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("You enter zero");
    }
    else if (num >= 0)
    {
        printf("%d is a positive number.", num);
    }
    else
    {
        printf("%d is a negitive number.", num);
    }
    return 0;
}