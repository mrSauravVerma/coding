#include<iostream>
using namespace std;
typedef class constructor_overloadng
{
    int a=10,b=20;
    public:
    constructor_overloadng(int x, int y)
    {
        a=x;
        b=y;
    }

    constructor_overloadng(int d)
    {
        a=d;
        b=0;
    }

    constructor_overloadng()
    {
        a;
        b;
    }

    void display()
    {
        cout<<"a = "<<a<<"\nb = "<<b<<"\na+b = "<<a+b<<endl<<endl;
    }
} co;
int main()
{
    co o(3, 4);
    o.display();

    co o2(3);
    o2.display();

    co o3;
    o3.display();
    return 0;
}