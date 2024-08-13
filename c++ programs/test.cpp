#include <iostream>
using namespace std;
class first
{
 public:
    void fun()
    {
        double a, b, result;
        float RESULT;
        char op;

        cin >> a;
        cin >> op;
        cin >> b;

        switch (op)
        {
        case '*':
            result = a * b;
            cout << a << "*" << b << "=" << result;
            break;
        case '+':
            result = a + b;
            cout << a << "+" << b << "=" << result;
            break;
        case '-':
            result = a - b;
            cout << a << "-" << b << "=" << result;
            break;
        case '/':
            RESULT = (float)a / (float)b;
            cout << a << "/" << b << "=" << RESULT;
            break;

        default:
            cout << "Invalid operator" << endl;
            break;
        }
    }
};

class second : public first
{
    void fun_2()
    {
        cout << "this is second class " << endl;
    }
};

int main()
{
    second o1;
    o1.fun();
    return 0;
}