//! This is the program for recursion
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

int powerr(int n){
    if(n == 0){
        return 1;
    }
    return 2 * powerr(n - 1);
}

string arr[10] = {"Zero","One", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void sayDigit(int n){
    if (n == 0)
    {
        return;
    }


    int digit = n%10;
    n = n / 10;
    sayDigit(n);
    cout<<arr[digit]<<endl;
}
int main()
{
    /*// cout<<factorial(5)<<endl;*/
    // cout<<powerr(6);
    int n = 1024;
    sayDigit(n);
    return 0;
}
