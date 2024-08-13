//  unexplan program
#include <iostream>

using namespace std;

class Cal {
private:
    int x;

public:
    Cal(): x(30) {} // Constructor to initialize x to 30

    void operator++() {
        x++; // Increment x
    }

    void print() {
        cout << "x: " << x << endl;
    }
};

int main() {
    Cal c;
    ++c;
    c.print();

    return 0;
}
