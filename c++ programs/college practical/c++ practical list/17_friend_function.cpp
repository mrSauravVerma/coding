#include <iostream>
using namespace std;
class CLASS
{
    void class_fun()
    {
        cout << "this is first class" << endl;
    }
    friend void frind_fun(CLASS);
//  friend void frind_fun(CLASS obj);
};
void frind_fun(CLASS obj)
{
    obj.class_fun();
}
int main()
{
    CLASS obj;
    frind_fun(obj);
    return 0;
}