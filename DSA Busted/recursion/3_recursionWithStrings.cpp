//! Solve Basics like reversing of a string and other few too....
#include<bits/stdc++.h>
using namespace std;
void reverseStringIterative(string &s){
    int srt = 0; int e = s.size() - 1;
    while (srt <= e)
    {
        swap(s[srt++], s[e--]);
    }
    
}
void reverseStringRecursively(string &str, int s){
    int e = str.size() - 1;
    if(s <= e){
        return;
    }
    swap(str[s], str[e]);
    reverseStringRecursively(str, s+1);
}
bool checkPalindrome(string str, int s, int e){
    if(s > e){
        return true;
    }
    if(str[s] != str[e]){
        return false;
    }
    else{
        return checkPalindrome(str, s+1, e-1);
    }
}
int main()
{
    string s = "racecar";
    cout<<s<<endl;
    reverseStringIterative(s);
    cout<<s;
    reverseStringRecursively(s, 0);
    cout<<s;
    cout<<endl;
    s = "racecar"; 
    cout<<s;
    cout<<checkPalindrome(s, 0, s.size() - 1);
    return 0;
}