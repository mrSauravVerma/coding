#include<iostream>
using namespace std;
class two;
class one
{
    int data_1;  //   <-------- private member

    public:
    void fun_1(int a)
    {
        data_1=a;
    }

    friend void mearge( one , two);
};

class two
{
    int data_2;  //   <-------- private member

    public:
    void fun_2(int b)
    {
        data_2=b;
    }
    friend void mearge( one , two);
};

   void mearge(one a1, two a2)
    {
        int m;
        m=a1.data_1+a2.data_2;
        cout<<"a+b : "<<m;
    }
int main()
{
    one o1;
    two o2;
    int a,b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;

    o1.fun_1(a);
    o2.fun_2(b);

    mearge(o1 , o2);
}