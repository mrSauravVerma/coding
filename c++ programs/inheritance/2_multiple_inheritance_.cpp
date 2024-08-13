#include<iostream>
using namespace std;
class base_1
{
    public :
    void fun_1()
    {
        cout<<"this is base class"<<endl;
    }
};
class base_2
{
    public :
    void fun_2()
    {
        cout<<"this is second base class"<<endl;
    }
};
class derived : public base_1 , public base_2
{
    public :
    void fun_3()
    {
        cout<<"this is derived class"<<endl;
    }
};
int main()
{
    derived obj;
    obj.fun_1();
    obj.fun_2();
    obj.fun_3();
    return 0;
}