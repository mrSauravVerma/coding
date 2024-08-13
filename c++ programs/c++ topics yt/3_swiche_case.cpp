#include<iostream>
//#include<string>
using namespace std;
class break_
{
    public:
    void fun(string d)
    {

        switch(d)
        {
            case "a" :
            cout<<"sunday"<<endl;
            break;

            case "b" :
            cout<<"monday"<<endl;
            break;

            case "c":
            cout<<"tuesday"<<endl;
            break;

            case "d":
            cout<<"tuesday"<<endl;
            break;
            case "e":
            cout<<"wednsday"<<endl;
            break;

            case "f":
            cout<<"thrusday"<<endl;
            break;

            case "g":
            cout<<"saturday"<<endl;
            break;

        }
    }
};
int main()
{
    break_ o;
    string day="b";

    o.fun(day);
    return 0;
}