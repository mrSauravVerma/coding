#include<iostream>
using namespace std;
class ab
{
public:
    int a,b;

    ab(int , int);
    void fun()
    {
        cout<<"a+b="<<a+b;
    }

};
ab :: ab(int x, int y)    //  perametrized constructor
{
    a=x;
    b=y;
}
int main()
{
    ab o(2,4);
    o.fun();
    return 0;
}