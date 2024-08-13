#include <iostream>

using namespace std;

struct Student
{
    int rollno;
    char name[50];

    void input()
    {
        
        cout << "\nEnter roll number: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin>>name;
    }

    void display()
    {
        cout << "\nRoll number: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student Std;

    cout << "Enter student record\n";
    Std.input();

    cout << "\nThe record is\n";
    Std.display();

    return 0;
}