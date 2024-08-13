#include <iostream>
using namespace std;
void fun(char c = '#', int count = 3)
{
    cout<<endl;
    for (int i = 1; i <= count; i++)
    {
        cout << c ;
    }
}
int main()
{
    fun();

    fun('*');

    fun('$', 5);
    return 0;
}
