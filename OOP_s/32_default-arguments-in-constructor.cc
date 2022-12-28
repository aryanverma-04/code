#include <iostream>
#include <string>
using namespace std;
class abc
{
    int a, b, c;

public:
    abc(int x, int y = 20, int z = 30)
    {
        a = x;
        b = y;
        c = z;
    }
    void p()
    {
        cout << a << " " << b << " " << c;
    }
};
int main()
{
    abc ab(10);
    ab.p();
    return 0;
}