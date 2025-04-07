#include<iostream>
using namespace std;
class new_class {
    public:
    void fun1(){
        cout<<"this is the first function"<<endl;;
    }
    void fun2(int x, int y){
        int r=x+y;
        cout<<"x+y is of "<<r<<endl;
    }
    int fun3(int x, int y){
        int r=x+y;
        return r;
    }
};
int main(){
    new_class obj1;
    int a=10,b=20, result; 
    obj1.fun1();  
    obj1.fun2(a,b);
    result=obj1.fun3(a,b);
    cout<<"a+b in the funcion of three "<<result<<endl; 
}