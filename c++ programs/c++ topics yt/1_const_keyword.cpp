#include<iostream>
using namespace std;
void nor_fun()
{
    cout<<"\nwith out use const keyword"<<endl;
    int a=20;
    cout<<"change the the value of a="<<a<<endl;
        a=40;
    cout<<"after the change of value of a="<<a<<endl;
}

void const_vari()
{
    cout<<"\nuseing the const keyword"<<endl;
    const int a=20;
    cout<<"value of a="<<a<<endl;
//  a=40;  ----> throw the error because we use const keyword
    cout<<"we doesnt change the value of a ."<<endl<<endl;
}
int main()
{
    nor_fun();
    const_vari();
    return 0;
}