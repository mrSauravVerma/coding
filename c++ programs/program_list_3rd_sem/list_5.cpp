// Write a program to illustrate reference variable
#include<iostream>
using namespace std;
int main()
{
    int num=5;
    int &num2=num;
    cout<<"before use reference variable num="<<num<<endl;
    num=10;
    cout<<"after use reference variable num ="<<num<<endl;
    return 0;
}