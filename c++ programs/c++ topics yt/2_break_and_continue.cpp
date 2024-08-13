#include<iostream>
using namespace std;

class break_continue
{
public:
    // This function demonstrates the use of the break statement
    void fun_break()
    {
        for(int i=0 ; i<10 ; i++)
        {
            if(i==5)
            {
                break; // Stop the loop when i equals 5
            }
            cout<<i<<endl;
        }
    }

    // This function demonstrates the use of the continue statement
    void fun_continue()
    {
        for(int i=0 ; i<10 ; i++)
        {
            if(i==5)
            {
                continue; // Skip the rest of the loop body when i equals 5
            }
            cout<<i<<endl;
        }
    }
};

int main()
{
    break_continue obj;
    cout<<"\nbreak function :-"<<endl;
    obj.fun_break();
    // The break function stops the loop after running 5 times

    cout<<"continue function :-"<<endl;
    obj.fun_continue();
    // The continue function skips printing 5 but continues the loop
    return 0;
}
