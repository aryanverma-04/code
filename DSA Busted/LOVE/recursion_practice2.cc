//! Recursion practive
#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

//? Tail recursion
void printNum(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printNum(n - 1);
}

//? Head recursion
void printNum2(int n)
{
    if (n == 0)
    {
        return;
    }
    printNum2(n - 1);
    cout << n << " ";
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    // cout<<n<<" ";
    return fib(n - 1) + fib(n - 2);
}

int powerOfTwo(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return 2 * powerOfTwo(n - 1);
}

string digit[10] = {"Zero", "One", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void sayDigit(int n)
{
    if (n == 0)
    {
        return;
    }
    int t = n % 10;
    n = n / 10;
    sayDigit(n);
    cout << digit[t] << " ";
}

bool isSorted(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    return isSorted(arr + 1, n - 1);
}

int getSum(int *arr, int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }
    return arr[0] + getSum(arr + 1, n - 1);
}

//* Linear and Binary Search Using Recursion.

bool LinearSearch(int *arr, int n, int key)
{
    if (n == 0)
    {
        return 0;
    }
    if (arr[0] == key)
    {
        return 1;
    }
    return LinearSearch(arr + 1, n - 1, key);
}

int binarySearch(int arr[], int start, int end, int key)
{

    if (start >= end)
    {
        return -1;
    }

    int mid = (start + end) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    if (key > arr[mid])
    {
        binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        binarySearch(arr, start, mid - 1, key);
    }
}


bool checkPalindrome(string s, int start, int end){
    if(start > end){ return true;}
    if(s[start]!=s[end]){ return false;}
    else{ return checkPalindrome(s, start+1, end-1);}
}


int power(int a, int b){
    if(b == 0){
        return 1;
    }
    if(a == 1){
        return a;
    }
    if(b&1){
        return a * power(a, b/2) * power(a,  b/2);
    }
    else{
        return  power(a, b/2) * power(a, b/2);
    }
}
int main()
{
    // cout<<factorial(5);
    // printNum(10);
    // cout<<endl;
    // printNum2(10);

    // cout<<endl<<fib(6);

    // cout<<powerOfTwo(10);
    // sayDigit(1029);

    // int arr[4] = { 10, 20, 30, 40};
    // cout<<isSorted(arr, 4);
    // cou<<getSum(arr, 4);

    // //! int *arr = new int[5]{10, 22, 20, 30, 30};
    // //* cout << LinearSearch(arr, 5, 70);

    // //? cout << binarySearch(arr, 0, 4, 20);

    // string s = "racecar";
    // cout<<s.length();
    // cout<<checkPalindrome(s, 0, s.length() - 1);

    cout<<power(10, 2);
    return 0;
}