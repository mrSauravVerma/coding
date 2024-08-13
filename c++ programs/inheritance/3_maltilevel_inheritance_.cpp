#include <iostream>
using namespace std;
class one
{
public:
    void fun_1()
    {
        cout << "this is class one" << endl;
    }
};
class two : public one
{
public:
    void fun_2()
    {
        cout << "this is class two" << endl;
    }
};
class three : public two
{
public:
    void fun_3()
    {
        cout << "this is class three" << endl;
    }
};
int main()
{
    three obj;
    obj.fun_1();
    obj.fun_2();
    obj.fun_3();
    return 0;
}