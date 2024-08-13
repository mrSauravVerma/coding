#include <iostream>
using namespace std;
class base
{
protected:
    int h, e, m, p;

public:
    base()
    {
        h = 89;
        e = 90;
        m = 78;
        p = 92;
    }
};

class h_e : virtual public base
{
public:
    void h_and_e()
    {
        cout << "percentage of hindi & english marks : " << static_cast<double>(h + e) / 200 * 100 << endl;
    }
};

class m_p : virtual public base
{
public:
    void m_and_p()
    {
        cout << "percentage of math & physice marks : " << static_cast<double>(m + p) / 200 * 100 << endl;
    }
};

class result : public m_p, public h_e
{
public:
    void total()
    {
        cout << "total percentage : " << static_cast<double>(h + e + m + p) / 400 * 100 << endl;
    }
};

int main()
{
    h_e o1;
    o1.h_and_e();

    m_p o2;
    o2.m_and_p();

    result o3;
    o3.total();

    return 0;
}