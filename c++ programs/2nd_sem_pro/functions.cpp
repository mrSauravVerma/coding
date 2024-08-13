#include<iostream>
using namespace std;
class fun
{
    public:
    void fun1()   //no argument no return
    {
        cout<<"fun 1 this is fun 1 "<<endl;
    }
    int fun2(int x,int y)   //with agrument no return
    {
        int r;
        r=x+y;
        cout<<"fun 2 "<<x<<"+"<<y<<":"<<r<<endl;
    }
    int fun3(int x,int y)    //with argument with return
    {
        int r;
        r=x+y;
        return r;
    }
    void fun4(int x,int y)              //with argument no return
    {
        int r;
        r=x+y;
        cout<<"fun 4 "<<x <<"+"<<y<<":"<<r<<endl;
    }
};
int main()
{
    fun obj;
    int a=20,b=30,r;
    obj.fun1();
    obj.fun2(a,b);
    r=obj.fun3(a,b);
    cout<<"fun 3 "<<a<<"+"<<b<<":"<<r<<endl;
    obj.fun4(a,b);
    return 0;
}