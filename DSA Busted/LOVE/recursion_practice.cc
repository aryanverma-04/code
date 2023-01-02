//! Recursion ki practice ho rhi hain....
#include <bits/stdc++.h>
using namespace std;

// Basic recursion
void num(int n)
{
    if (n == 0)
    {
        return;
    }
    num(n - 1);
    cout << n << endl;
}

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    // Recursive relation

    return n * fact(n - 1);
}

int powerOfTwo(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return 2 * powerOfTwo(n - 1);
}

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int getSum(int arr[], int size = 5)
{
    printarr(arr, size);
    if (size == 0)
    {
        return 0;
    }
    return arr[0] + getSum(arr + 1, size - 1);
}

bool linearSearch(int arr[], int size, int key)
{
    if (size == 0)
        return false;
    if (arr[0] == key)
        return true;
    else
        return linearSearch(arr + 1, size - 1, key);
}

bool checkPalindrome(string str, int start, int end)
{
    if (start > end)
    {
        return true;
    }
    if (str[start] != str[end])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str, start + 1, end - 1);
    }
}

int __power__(int a, int b)
{
    // Base case were two of them..
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    // actuall recursion call

    if (b & 1)
    {
        return a * __power__(a, b / 2) * __power__(a, b / 2);
    }
    else
    {
        return __power__(a, b / 2) * __power__(a, b / 2);
    }
}

void bubbleSort(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, n - 1);
}

int main()
{
    // int n = 10;
    // // num(n);
    // cout << fact(10) << endl;
    // cout << powerOfTwo(10) << endl;

    // int *arr = new int[5] {10, 30, 20, 40, 40};
    // cout<<getSum(arr);
    // cout<<linearSearch(arr, 5, 70);

    // string str = "whatisthissihtsitahw";
    // cout<<checkPalindrome(str, 0, str.length() - 1);

    // cout<<__power__(2, 3);

    int *arr = new int[6]{10, 50, 20, 30, 40, 0};
    printarr(arr, 6);
    bubbleSort(arr, 6);
    printarr(arr, 6);

    return 0;
}