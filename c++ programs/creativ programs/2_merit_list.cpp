#include <iostream>
using namespace std;

class marit
{
public:
    double per(int n)
    {
        return ((double)n / 300) * 100;
    }
    void list(double p)
    {
        if (p >= 60)
        {
            cout << "Student name in the merit list\n"
                 << endl;
        }
        else
        {
            cout << "No student name in merit list\n"
                 << endl;
        }
    }
    void data(string n, double p)
    {
        cout << "Student name is " << n << endl;
        cout << "Student percentage is " << p << endl;
    }
};

int main()
{
    marit o;
    string name;
    int number;
    double p;

    cout << "\nEnter the name of student : ";
    cin >> name;
    cout << "Enter the numbers of student : ";
    cin >> number;

    p = o.per(number);
    cout << "\nStudent percentage is " << p << "%" << endl;
    o.list(p);

    cout << "This is data of student:\n";
    o.data(name, p);
    o.list(p);

    return 0;
}
