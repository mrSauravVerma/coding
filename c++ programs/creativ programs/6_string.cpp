#include<iostream>
#include<string>
using namespace std;

class check
{
    string s;

    public:
    void read()
    {
        cout<<"Enter the string : ";
        cin>>s;
    }
    void fun()
    {
        int len = s.length();
        for(int i = 0; i < len; i++)
        {
            cout<<s.at(i);
        }
        cout << endl;
    }
};

int main()
{
    check obj;
    obj.read();
    obj.fun();
    return 0;
}
