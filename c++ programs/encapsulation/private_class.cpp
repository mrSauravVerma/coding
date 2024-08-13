#include<iostream>
using namespace std;
class private_class
{
    private :
    void fun()
    {
        cout<< "this is private class"<<endl;
    }
    public:
    void pub_fun()
    {
        cout<<"this is public fun"<<endl;
        fun();
    }
};
int main()
{
    private_class obj;
//  obj.private_fun();  ---> not accessible because its ptivate function
    obj.pub_fun();
    return 0;
}