#include <iostream>
using namespace std;
class my_class
{
public:
    void fun(int i)
    {
        cout << "num : " << i << endl;
        return;
    }
};
int main()
{
    my_class obj[5];
    for (int i = 0; i < 5; i++)
    {
        obj[i].fun(i);
    }
    return 0;
}