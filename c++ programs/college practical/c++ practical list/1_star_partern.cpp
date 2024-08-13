#include<iostream>
using namespace std;
int print_stars(int n);
int main()
{
    int n;
    cout<<"enter the number of stars lines :";
    cin>>n;
    print_stars(n);
    return 0;
}
int print_stars( int n )
{
    for(int i=0 ; i<=n ; i++ )
    {
        for(int j=0 ; j<i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
