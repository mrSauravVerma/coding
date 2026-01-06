#include <stdio.h>
int main()
{
    int num, last_n, r_num = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        last_n = num % 10;
        r_num = r_num * 10 + last_n;
        num = num / 10;
    }
    printf("reverce number : %d", r_num);
    return 0;
}