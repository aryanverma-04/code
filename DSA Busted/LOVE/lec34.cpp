//! recursion with strings..

#include <bits/stdc++.h>
using namespace std;
// Reverse a string using recursion
void reverseString(int i, int j, string &str)
{
    if (i > j)
    {
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;

    reverseString(i, j, str);
}

// Check if a number is palindrome or not?
bool checkPalindrome(string str, int i , int j){
    if(i > j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return checkPalindrome(str, i + 1, j - 1);
    }
}

int power(int a, int b){
    // Base case
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }

    if(b&1){
        return  a * power(a, b/2) * power(a, b/2);
    }
    else{
        return power(a, b/2) * power(a, b/2);
    }
}


int main()
{
    // string a = "sum";
    // reverseString(0, 4, a);
    // cout<<a.length() - 1;
    // cout<<checkPalindrome(a, 0, a.length() - 1);
    // cout << a << endl;

    // cout<<power(2, 10);
    return 0;
}