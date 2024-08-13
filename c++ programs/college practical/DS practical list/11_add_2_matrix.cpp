#include<iostream>
using namespace std;
int main()
{
    int A[20][20],B[20][20],R[20][20],r1,r2,c1,c2;

    cout<<"Enter the row of first matrix : ";
    cin>>r1;

    cout<<"Enter the column of first matrix : ";
    cin>>c1;

    cout<<"Enter the row of first matrix : ";
    cin>>r2;

    cout<<"Enter the column of first matrix : ";
    cin>>c2;

    cout<<"Enter the element of first matrix : "<<endl;
    for(int i=0 ; i<r1 ; i++)
    {
        for(int j=0 ; j<c1 ; j++)
        {
            cout<<"arr["<<i<<"]"<<"["<<j<<"] : ";
            cin>>A[i][j];
        }
    }
    cout<<"Enter the element of scound matrix : "<<endl;;
    for(int i=0 ; i<r1 ; i++)
    {
        for(int j=0 ; j<c1 ; j++)
        {
            cout<<"arr["<<i<<"]"<<"["<<j<<"] : ";
            cin>>B[i][j];
        }
    }

    cout<<"addtion of matrices : "<<endl;
    for(int i=0 ; i<r1 ; i++)
    {
        for(int j=0 ; j<c1 ; j++)
        {
            R[i][j]=A[i][j]+B[i][j];
        }
    }
    
    for(int i=0 ; i<r1 ; i++)
    {
        for(int j=0 ; j<c1 ; j++)
        {
            cout<<R[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}