//! 
#include<bits/stdc++.h>
using namespace std;
bool CalculateBinaryOperations(string s){
    int ans = s[0] - '0';
    for (size_t i = 1; i < s.size(); i+=2)
    {
        int j = i + 1;
        if(s[i] == 'A'){
            ans = ans & (s[j] - '0');
            continue;
        }
        else if(s[i] == 'B'){
            ans = ans | (s[j] - '0');
            continue;
        }
        else if(s[i] == 'C'){
            ans = ans ^ (s[j] - '0');
            continue;
        }
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<CalculateBinaryOperations(s);
    return 0;
}