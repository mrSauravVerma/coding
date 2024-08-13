#include <iostream>
using namespace std;
class calculate
{
private:
    double t_ammount;

public:
    int cal(double p, double ammount)
    {
        t_ammount=(ammount/p)*100;
        return t_ammount;
    }
};
int main()
{
    calculate obj;
    double per, ammount;
    cout << "Enter the persentage : ";
    cin >> per;
    cout << "enter the ammount : ";
    cin >> ammount;
cout<<"total ammount = "<<obj.cal(per, ammount);
    return 0;
}
