#include <iostream>
using namespace std;
class base
{
public:
    void fun1()
    {
        cout << "This is derived class" << endl;
    }
};
class derived : public base
{
public:
    void fun2()
    {
        cout << "This is derived class" << endl;
   }
};
int main()
{
    derived obj;
    obj.fun2();
    obj.fun1();
    return 0;
}