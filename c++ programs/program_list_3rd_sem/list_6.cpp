// Write a program to illustrate scope resolution operator
#include<iostream>
using namespace std;
int global_vari=20;       //  global variable
int main()
{
    int local_vari=30;    //  local variable
    cout<<"global  variable :"<<global_vari<<endl;
    cout<<"local variable :"<<local_vari<<endl;
    return 0;
}