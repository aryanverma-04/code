#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: \n";
    cin >> n;

    int original = n;
    int lastdigit, sum = 0;

    while (n != 0)
    {
        lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }

    if (sum == original)
        cout << "Armstrong number\n";
    else
        cout << "Not Armstrong number\n";

    return 0;
}