#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a any character : ");
    scanf("%c", &ch);
    if (('a' <= ch && 'z' >= ch) || ('A' <= ch && 'Z' >= ch))
    {
        printf("%c ia alphabet",ch);
    }
    else
    {
        printf("%c is not a alphabet.",ch);
    }
    return 0;
}