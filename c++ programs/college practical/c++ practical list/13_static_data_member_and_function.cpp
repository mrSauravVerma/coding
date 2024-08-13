#include <iostream>
using namespace std;
class first
{
public:
    static int count;
    //  static int count=1;     ---->      throws error
    void fun()
    {
        cout << "normal function : " << count << endl;
        count++;
    }

    static void fun2()   // <----- static function
    {
        cout <<"static function : "<< count-1 <<"\n"<< endl;
    }
};

int first ::count = 1;   // <----- static data member

int main()
{
    first a, b, c, d, e;
    a.fun();
    a.fun2();

    b.fun();
    b.fun2();

    c.fun();
    c.fun2();

    d.fun();
    d.fun2();

    e.fun();
    e.fun2();
    return 0;
}