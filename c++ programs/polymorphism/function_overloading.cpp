#include<iostream>
using namespace std;

class fun_overload {
public:
    int fun(int a, int b) {
        cout << a * b << endl;
        return a * b;
    }

    int fun(int a, int b, int c) {
        cout << a + b + c << endl;
        int s = a + b + c;
        return s;
    }
};

int main() {
    fun_overload obj;
    int a, b, c, d, e;

    cout << "enter the a and b : " << endl;
    cin >> a >> b;
    cout << "a * b = " << obj.fun(a, b) << endl;

    cout << "enter three numbers : " << endl;
    cin >> c >> d >> e;
    cout << "a + b + c : " << obj.fun(c, d, e);

    return 0;
}
