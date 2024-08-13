#include<iostream>
using namespace std;
class my_class
{
    public:
    void display()
    {
        cout<<"print with class function"<<endl;
        return;
    }
};
void fun(my_class obj)
{
    cout<<"this is function"<<endl;
    obj.display();
}
int main()
{
   my_class obj;
   fun(obj);
   return 0;
}