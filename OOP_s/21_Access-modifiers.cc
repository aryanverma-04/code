#include <iostream>
using namespace std;
class employee
{
public:
    int a, b, c;
    void getdata()
    {
        cout << "The value is " << a << endl;
        cout << "The value is " << b << endl;
        cout << "The value is " << c << endl;
        cout << "The value is " << d << endl;
        cout << "The value is " << e << endl;
    };
    void setdata(int d1, int e1);

protected:
    int d, e;
};
void employee ::setdata(int d1, int e1)
{
    d = d1;
    e = e1;
}
int main()
{
    employee e1;
    e1.a = 10;
    e1.b = 20;
    e1.c = 30;

    e1.setdata(40, 50);
    e1.getdata();
    return 0;
}