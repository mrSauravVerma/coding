#include<iostream>
using namespace std;
int main()
{
    int orignal = 23;
    int &ref = orignal;

    cout<<"origanl variable : "<< orignal <<endl<<
          "referance variable : "<< ref <<endl;
    return 0;
}