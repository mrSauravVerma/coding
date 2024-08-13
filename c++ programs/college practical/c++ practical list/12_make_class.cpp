#include <iostream>
using namespace std;
class finder
{
public:
    void find(int c)
    {
        if (c == 306)
        {
            cout << "OOPs practical date is 19-02-2024" << endl;
        }
        else
        {
            cout << "Ds practical date is 14-02-2024" << endl;
        }
    }
};

int main()
{
    finder obj;
    int code;
    cout << "Enter the code of practical subject : ";
    cin >> code;
    if ((code == 307) || (code == 306))
    {
        obj.find(code);
    }
    else
    {
        cout << "code is incorrect";
    }
}