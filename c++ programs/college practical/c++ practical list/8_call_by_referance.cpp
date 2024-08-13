#include<iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a, b;
    cout<<"Enter the vlaue of a and b : ";
    cin>>a>>b;
    swap( a, b);
    cout<<"After the swaping values a="<<a<<"  b="<<b<<endl;
    return 0;
}