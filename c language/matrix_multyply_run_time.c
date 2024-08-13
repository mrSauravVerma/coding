#include <stdio.h>

int main()
{
    int r, c, r2, c2, a[20][20], b[20][20], re[20][20];

    printf("Enter the row of the first matrix: ");
    scanf("%d", &r);
    printf("Enter the column of the first matrix: ");
    scanf("%d", &c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("First matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the row of the second matrix: ");
    scanf("%d", &r2);
    printf("Enter the column of the second matrix: ");
    scanf("%d", &c2);

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Enter b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Second matrix:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }

    if (c != r2)
    {
        printf("Matrix multiplication not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    printf("\nMULTIPLY FIRST AND SECOND MATRIX \n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            re[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                re[i][j] = re[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("Result matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d \t", re[i][j]);
        }
        printf("\n");
    }

    return 0;
}