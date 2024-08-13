#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

class my_class
{
    int a[100];

public:
    int project(int num)
    {
        for(int i=1 ; i<=100 ; i++)
        {
            a[i]=i;
        }
        srand(time(NULL)); // Initialize random seed

        // Generate a random index within the specified range
        int randomIndex = rand() % num + 1;

        cout<<"Random number(0-"<<num<<") is: "<<a[randomIndex]<<endl;
    }
};

int main()
{
    my_class o;
    int num;
    cout << "Enter the range of numbers: ";
    cin >> num;

    o.project(num);
    return 0;
}