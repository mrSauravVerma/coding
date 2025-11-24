#include <stdio.h>
int main()
{
    /*Which statement about break in switch is correct?
A. Required after every case
B. Optional; used to prevent fall-through
C. Causes compile-time error if present
D. Only used in loops, not in switch*/
    // examle of break in switch
    int num = 2;
    switch (num)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    default:
        printf("Other number\n");
    }
    return 0;
}