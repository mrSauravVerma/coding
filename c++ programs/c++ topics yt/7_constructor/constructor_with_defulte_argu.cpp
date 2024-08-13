#include<iostream>
using namespace std;
class test
{
    int a,b;
public:
    void fun()
    {
        cout<<"a="<<a<<"\nb="<<b<<endl;
    }
    test();
    test(int ,int);
    test(float y, float z);

};
test :: test(int y, int z)
{
    a=y;
    b=z;
}
test :: test(float y, float z)
{
    a=y;
    b=z;
}
int main()
{
    test e();
    int a,b;
    float a,b;
    cout<<"enter the vale of a and b in : ";
    cin>>a>>b;

    test o(a,b);
    return 0;
}