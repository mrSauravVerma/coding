#include <iostream>
using namespace std;
void loops_fun();    //    <------------
int main()
{
   loops_fun();
    return 0;
}
    void loops_fun()
    {
        cout << "print 10 numbers to for loop : " << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << "number : " << i + 1 << endl;
        }
        /////////////////////////////
        cout << "print 10 numbers to while loop : " << endl;
        int i = 1;
        while (i < 10)
        {
            cout << "number : " << i + 1 << endl;
            i++;
        }
        /////////////////////////////
        i = 1;
        cout << "print 10 numbers to do while loop : " << endl;
        do
        {
            cout << "number : " << i + 1 << endl;
            i++;
        } while (i < 10);
    }