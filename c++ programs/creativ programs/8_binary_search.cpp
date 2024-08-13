#include<iostream>
using namespace std;
int main()
{
    string arr[1000];
    for(int i=0 ; i<1000 ; i++)
    {
        arr[i]=i+1;
    }
    arr[657]=78;

    int c='u';
    cout<<c;
    return 0;
}