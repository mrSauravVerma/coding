#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    // int a[5]={1,2,3,4,5}; this is also valid
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("Size of array a: %zu bytes\n", sizeof(a));
    return 0;
}