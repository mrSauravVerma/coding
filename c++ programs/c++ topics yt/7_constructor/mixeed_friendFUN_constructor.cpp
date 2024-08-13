#include <iostream>
using namespace std;

class test
{
    int temp, a, b;

public:
    test()
    {
        a = 45;
        b = 54;
    }
    void class_fun()
    {
        cout << "before swap values \n a=" << a << "\n b=" << b << endl;
        temp = a;
        a = b;
        b = temp;
        cout << "after swap values \n a=" << a << "\n b=" << b << endl;
    }
    friend void friend_fun(test o);
};

void friend_fun(test o2)
{
    o2.class_fun();
}

int main()
{
    test o2;
    friend_fun(o2);
    return 0;
}
