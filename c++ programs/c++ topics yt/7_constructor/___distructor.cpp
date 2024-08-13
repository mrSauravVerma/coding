#include<iostream>
using namespace std;

int count=0;   //-------------> GLOBAL VARIABLE

class dis
{
public:
    dis(){}
    dis(int n) //   ----------> CONSTRUTOR
    {
        cout<<"In the constructor call"<<endl;
        count=n;
        cout<<"count : "<<count<<endl;
    }
    ~dis()  //     -----------> DISTRUTOR
    {
        cout<<"In the distructor"<<endl;
        --count;
        cout<<"count : "<<count<<endl;
    }
    void fun() //  ------------> SIMPLE FUNCTION
    {
        cout<<"In the function"<<endl;
        cout<<"count : "<<count<<endl;        
    }
};

int main()
{
    dis b(5);
    b.fun();
    {           ///////////////////////////////////////////
        cout<<"enter the new block"<<endl;   
        dis x;             //                 BLOCK                 
        x.fun();                        
    }          ///////////////////////////////////////////
    return 0;
}