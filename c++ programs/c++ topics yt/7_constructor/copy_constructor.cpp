#include<iostream>
using namespace std;
typedef class copy_cons
{
    int a;
public:

    copy_cons()
    {
        a=0;
    }

    copy_cons(copy_cons &obj)
    {
        cout<<"cp called"<<endl;
        a=obj.a;
    }
    copy_cons(int x)
    {
        a=x;
    }

    void fun()
    {
        cout<<"a="<<a<<endl;
    }
}cp;

int main()
{
    cp o1,o2(4),o3;
    o1.fun();
    o2.fun();
    o3.fun();

    cp z1(o2);
    z1.fun();
    return 0;
}