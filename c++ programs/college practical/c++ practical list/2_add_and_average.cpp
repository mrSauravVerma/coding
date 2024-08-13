#include<iostream>
using namespace std;

class AddAverage {
public:
    int add(int a, int b) {
        return a + b;
    }

    double average(int a, int b) {
        return (a + b) / 2.0;
    }
};

int main() {
    AddAverage obj;
    int a, b;

    cout << "Enter the two numbers: ";
    cin >> a >> b;

    cout << a << " + " << b << " = " << obj.add(a, b) << endl;
    cout << "Average of " << a << " and " << b << ": " << obj.average(a, b) << endl;

    return 0;
}
