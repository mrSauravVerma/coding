#include<iostream>
using namespace std;
class sun{
public:
    void sun_class_fun()
    {
        cout << "This is public function" << endl;
    }
};

class father : public sun{
public:
    void father_class_fun()
    {
        cout<<"this is father class"<<endl;
    }
};
int main()
{
    father obj;
    obj.father_class_fun();
    obj.sun_class_fun();
    return 0;
}