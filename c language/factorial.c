#include <stdio.h>

// Function to calculate the  factorial of a number using recursion
int factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    } 
    else 
    {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Get input from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the input is non-negative
    if (num < 0) 
    {
        printf("Please enter a non-negative integer.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate and display the factorial
    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0; // Exit the program successfully
}
