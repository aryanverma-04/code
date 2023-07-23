//! 
#include<bits/stdc++.h>
using namespace std;
string MoveHyphen(string s){
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '-')
            ans.push_back('-');
    }
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] != '-')
            ans.push_back(s[i]);
    }
    return ans;
}
int main()
{
    string s = "Move-Hyphens-to-Front";
    cout<<MoveHyphen(s);
    return 0;
}