#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, n5;
    float avg;
    printf("enter five number : ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    scanf("%d", &n5);
    avg = (n1 + n2 + n3 + n4 + n5) / 5.0;
    printf("average of five number : %.2f", avg);
    return 0;
}