#include <iostream>
using namespace std;
void fun();
int main()
{
    fun();
    return 0;
}

static int i; // static data member defulte value is 0

void fun()
{
    if (i < 5)
    {
        cout << i << endl;
        ++i;
        fun();
    }
}