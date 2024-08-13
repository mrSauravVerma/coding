#include <iostream>
using namespace std;
class fun_over
{
    public:
    void fun()
    {
        cout<<"function with no argument"<<endl;
    }
    
    void fun(int a)
    {
        cout<<"function with argument"<<endl;
    }

    void fun(double c)
    {
        cout<<"function with double argument"<<endl;
    }

    void fun(int a, int b)
    {
        cout<<"function with 2 intiger aggument"<<endl;
    }
};
int main()
{
    fun_over obj;
    int a = 5, b = 30;
    double c = 5.44;
    obj.fun();
    obj.fun(a);
    obj.fun(c);
    obj.fun(a, b);
}