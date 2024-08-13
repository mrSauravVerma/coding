#include<iostream>
using namespace std;

class cons
{
    int a,b;

    public:
    
    cons(void);

    void addnum()
    {
        cout<<"a+b="<<a+b<<endl;
    }
};

cons :: cons(void)
{
    a=20;
    b=15;
}

int main()
{
    cons o;
    o.addnum();
    return 0;
}