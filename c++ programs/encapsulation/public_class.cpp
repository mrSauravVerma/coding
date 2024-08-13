#include<iostream>
using namespace std;
class public_class
{
    public :
    void fun()
    {
        cout<< "it,s public class "<< endl;
    }
};
int main()
{
    public_class obj;
    obj.fun();
    return 0;
}