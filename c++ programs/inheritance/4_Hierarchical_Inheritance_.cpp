#include<iostream>
using namespace std;
class base{
    public:
    void fun_1(){
        cout<<"this is base class ";
    }
};
class derived_2 : public base {
    public:
    void fun_2(){
        cout<<"call by second derived class"<<endl;
    }
};
class derived_1 : public base{
    public :
    void fun_3(){
        cout<<"call to by first derived"<<endl;
    }
};
int main(){
    derived_1 obj;
    obj.fun_1();
    obj.fun_3();

    derived_2 obj_2;
    obj_2.fun_1();
    obj_2.fun_2();

    return 0;
}