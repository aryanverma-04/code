#include <iostream>
using namespace std;
int find(int a[20], int n, int k)
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return a[n - k];
}

int main()
{
    int i, n, a[20], k, l;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout<< "Enter the value of K: ";
    cin >> k;

    int kth = find(a, n, k);
    cout <<endl<< "The " << k << "th largest element is: " << kth;
}