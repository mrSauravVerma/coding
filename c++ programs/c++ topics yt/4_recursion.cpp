#include <iostream>
using namespace std;

int factorial(int n)                 // 5*4*3*2 = 120
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {                                // 5 * (4)  = 20
        cout << "n=" << n << endl;   // 20* (3)  = 60
        return n * factorial(n - 1); // 60* (2)  = 120
    }                                
}

int main()
{
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Please enter a non-negative integer." << endl;
    }
    else
    {
        cout << "Factorial of " << n << " = " << factorial(n) << endl;
    }

    return 0;
}
