#include<iostream>
using namespace std;
class base
{
    public:
    void base_fun()
    {
        cout<<"this is base class"<<endl;
    }
};

class derived_1 : virtual public base
{
    public:
    void derived_1_fun()
    {
        cout<<"this is first derived class"<<endl;
    }
};

class derived_2 :virtual public base
{
    public:
    void derived_2_fun()
    {
        cout<<"this is second derived class"<<endl;
    }
};

class derived_hybrid : public derived_1 , public derived_2
{
    public:
    void derived_hybrid_fun()
    {
        cout<<"this is hybrid derived class"<<endl;
    }
};
int main()
{
    derived_hybrid obj_3;
    obj_3.derived_hybrid_fun();
    obj_3.derived_1_fun();
    obj_3.derived_2_fun();  
    obj_3.base_fun();
    return 0;
}