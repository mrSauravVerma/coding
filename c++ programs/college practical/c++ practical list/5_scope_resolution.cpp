#include<iostream>
using namespace std;
int global_vari=5;     //----->  GLOBAL VARIABLE
int main()
{
    int local_vari=10; //----->  LOCAL VARIABLE
    cout<<"global variable : "<<global_vari<<endl
        <<"local variable : " <<local_vari <<endl;
        return 0;
}