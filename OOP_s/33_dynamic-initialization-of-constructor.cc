#include <iostream>
#include <string>
using namespace std;
class pnb
{
    int principal, years;
    float interest, returnvalue;

public:
    pnb(int p, int y, int i);
    pnb(int p, int y, float i);
    void show()
    {
        cout << endl
             << "Principal amount was " << principal
             << ". Return value after " << years
             << " years is " << returnvalue << endl;
    }
};
pnb ::pnb(int p, int y, float i)
{
    principal = p;
    years = y;
    interest = i;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interest);
    }
}
pnb ::pnb(int p, int y, int i)
{
    principal = p;
    years = y;
    interest = float(i) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interest);
    }
}
int main()
{
    pnb b1(100, 2, 4);
    b1.show();
    pnb b2(100,2,2);
    b2.show();
    return 0;
}