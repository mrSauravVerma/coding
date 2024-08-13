#include <stdio.h>

#define MAX 10

/* Function declarations */
void input(int a[], int size);
void display(int a[], int size);
void binarysearch(int a[], int size);

int main()
{
    int size, i, a[MAX];
    printf("Enter the size of array: ");
    scanf("%d", &size);
    input(a, size);   /* Function call to pass an array */
    display(a, size); /* Function call to pass an array */
    binarysearch(a, size);
    return 0;
}

/* Function definitions */
void input(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter a[%d] value of array: ", i);
        scanf("%d", &a[i]);
    }
}

void display(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("\nThe a[%d] value of array = %d", i, a[i]);
    }
}

void binarysearch(int a[], int size)
{
    int lb = 0, ub = size - 1, mid, item;
    printf("\nEnter the item to search: ");
    scanf("%d", &item);
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (item == a[mid])
        {
            printf("Search is successful, item is found at index = %d", mid);
            return;
        }
        else if (item > a[mid])
        {
            lb = mid + 1;
        }
        else
        {
            ub = mid - 1;
        }
    }
    printf("Search is unsuccessful, item is not found");
}
