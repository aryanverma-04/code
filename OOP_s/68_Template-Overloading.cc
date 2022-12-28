#include <iostream>
#include <string>
using namespace std;
template <class m = int>
class aryan
{
public:
    m data;
    aryan(m n)
    {
        data = n;
        cout << "The value of data is: " << data << endl;
    }
    void display();
};
template <class t2>
void aryan<t2>::display()
{
    cout << "The value of data is: " << data << endl;
}
int main()
{
    aryan<float> a(10.99);
    a.display();
    return 0;
}