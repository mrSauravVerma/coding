// DELETE A ELEMENT IN ARRAY PROGRAM
#include<iostream>
using namespace std;
int main()
{
    int arr[20],size,posi;
    cout<<"enter the size of array : ";
    cin>>size;

    cout<<"Enter the element of array " <<endl;
    for(int i=0 ; i<size ; i++)
    {
        cout<<endl<<"array["<<i<<"] : ";
        cin>>arr[i];
    }
////////////////////////////////////////////////////////
    
    cout<<"Enter the position in array : ";
    cin>>posi;

    size--;

    for(int i=posi ; i<size ; i++)
    {
        arr[i-1]=arr[i];
    }

    for(int i=0 ; i<size ; i++)
    {
        cout<<"array["<<i<<"] : "<<arr[i]<<endl;
    }
    return 0;
}