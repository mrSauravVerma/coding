#include <iostream>
using namespace std;
void fun()
{
    class local
    {
        public:
        void fun_in_class()
        {
            cout<<"LOCAL CLASS"<<endl;
        }
    };
    local obj;
    obj.fun_in_class();
}
int main()
{
    fun();
    return 0;
}