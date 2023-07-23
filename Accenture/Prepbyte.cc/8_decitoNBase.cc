//! decitoNBase n: 12 num: 718
#include<bits/stdc++.h>
using namespace std;
string decitoNBase(int n, int num){
    string ans = "";
    while(num > 0){
        int digit = num % n;
        if(digit >= 0 && digit<= 9){
            char ch = digit + '0';
            ans.push_back(ch);
        }
        else{
            char ch = 'A' + digit - 10;
            ans.push_back(ch);
        }
        num = num / n;

    }
    return ans;
}
int main()
{
    cout<<decitoNBase(21, 5678);
    return 0;
}