#include <iostream>
using namespace std;

int main()
{
    char op;
    double num1, num2;
    for (int i = 0; i < 50; i++)
    {
        cout << endl;
        // cout << "\nEnter first number: ";
        cin >> num1;

        // cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        // cout << "Enter second number: ";
        cin >> num2;

        switch (op)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        default:
            cout << "Error! Invalid operator.";
            break;
        }
    }
    return 0;
}