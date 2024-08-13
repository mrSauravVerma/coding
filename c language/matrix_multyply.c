#include <stdio.h>
int main()
{
    int r[20][20],i,j,
        a1[20][20] = {{1, 2, 3,},   // 1+8+27   2+10+24    3+12+21 = 36 36 36
                      {4, 5, 6,},   // 4+20+54                     = 78       
                      {7, 8, 9 }},                                            

        a2[20][20] = {{1, 2, 3,},
                      {4, 5, 6,},
                      {7, 8, 9 }};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            r[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                r[i][j] = r[i][j] + a1[i][k] * a2[k][j];
            }
        }
    }

    printf("THIS IS THE RESULT a1 * a2 \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d \t", r[i][j]);
        }
        printf("\n");
    }
    return 0;
}