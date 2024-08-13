#include <iostream>
using namespace std;

class Operators
{
public:
    void AND(int a, int b, int c)
    {
        cout << "AND operator (a<b)&&(a>c) : " << (a < b) << " && " << (a > c) << " = " << (a < b && a > c) << "\n"
             << endl;
    }

    void OR(int a, int b, int c)
    {
        cout << "OR operator (a<b)||(a>c) : " << (a < b) << " || " << (a > c) << " = " << (a < b || a > c) << "\n"
             << endl;
    }
    void NOT(int a, int b)
    {
        cout << "NOT operator (a>b) : "
             << "!" << (a < b) << " = " << !(a < b) << "\n"
             << endl;
    }
};

int main()
{
    Operators obj;
    int a, b, c;
    cout << "Enter the values of a b c : ";
    cin >> a >> b >> c;

    obj.AND(a, b, c);

    obj.OR(a, b, c);

    obj.NOT(a, b);

    return 0;
}
