#include<iostream>
using namespace std;

int main() {
    int *ptr = new int;
    *ptr = 42;
    cout<< "Value at ptr: " << *ptr << endl;
    // Deallocating memory using delete opreator
    delete ptr;
    cout<< "value of ptr after using delete opreator: " << *ptr <<endl;
    return 0;
}
