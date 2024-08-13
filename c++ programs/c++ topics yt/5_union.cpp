#include<iostream>
using namespace std;
union abcd
{
    int INT;
    char CHAR;
    float FLOAT;
    char string[100] ;
};
int main()
{
    union abcd obj;
    obj.INT=10;
    obj.CHAR='a';
    obj.FLOAT=10.55;

    cout<<"int : "<< obj.INT <<endl;  // uncorrect output
    cout<<"char : "<<obj.CHAR<<endl;  // uncorrect output
    cout<<"float : "<<obj.FLOAT<<endl;  // <----  correct output

    return 0;
}