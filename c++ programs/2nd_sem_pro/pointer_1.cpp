#include <iostream>
using namespace std;
int main()
{
    int a = 5, *ptr;  // int a=5 ,*ptr=&a;
    ptr = &a;
    // &  ----> this is addras opreator
    // *  ----> this is dereference operator
    cout << "value of a=" << a << endl;
    cout << "addars of a= " << ptr<<endl;
    cout << "value of ptr=" << *ptr<<endl;
    return 0;
}