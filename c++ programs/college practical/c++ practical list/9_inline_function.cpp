#include <iostream>
using namespace std;
class Find
{
public:
    inline int big_num(int a, int b, int c)
    {
        int r;
        if (a > b && a > c)
        {
            return a;
        }
        else
        {
            if (b > a && b > c)
            {
                return b;
            }
            else
            {
                return c;
            }
        }
    }
};
int main()
{
    Find obj;
    int a, b, c;
    cout << "Enter the 3 numbers : ";
    cin >> a >> b >> c;
    cout << "Bigest number is " << obj.big_num(a, b, c)<<endl;
    cout << "Bigest number is " << obj.big_num(a, b, c)<<endl;
	cout << "Bigest number is " << obj.big_num(a, b, c)<<endl;
	cout << "Bigest number is " << obj.big_num(a, b, c)<<endl;
	cout << "Bigest number is " << obj.big_num(a, b, c)<<endl;
	cout << "Bigest number is " << obj.big_num(a, b, c)<<endl;
	cout << "Bigest number is " << obj.big_num(a, b, c)<<endl;
	cout << "Bigest number is " << obj.big_num(a, b, c)<<endl;
	cout << "Bigest number is " << obj.big_num(a, b, c)<<endl;
	cout << "Bigest number is " << obj.big_num(a, b, c)<<endl;
	cout << "Bigest number is " << obj.big_num(a, b, c)<<endl;
	cout << "Bigest number is " << obj.big_num(a, b, c)<<endl;
	cout << "Bigest number is " << obj.big_num(a, b, c)<<endl;
	cout << "Bigest number is " << obj.big_num(a, b, c)<<endl;
    return 0;
}
