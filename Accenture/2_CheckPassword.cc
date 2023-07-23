//!
#include <bits/stdc++.h>
using namespace std;
bool hasNum(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            return true;
    }
    return false;
}
bool hasCapital(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            return true;
    }
    return false;
}
bool CheckPassword(string s)
{
    if (s.size() <= 3 || (s[0] >= '0' && s[0] <= '9'))
    {
        return false;
    }
    bool N = hasNum(s);
    bool H = hasCapital(s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' || s[i] == '/')
            return false;
    }
    return (hasNum && hasCapital);
}
int main()
{
    string s;
    cin>>s;
    cout<<CheckPassword(s);
    return 0;
}

// #include<iostream>
// #include<string.h>
// using namespace std;
// int CheckPassword(char str[]) {
//         int len = strlen(str);
//         bool isDigit = false, isCap = false, isSlashSpace=false,isNumStart=false;
//         //RULE 1: At least 4 characters in it
//         if (len < 4)
//             return 0;
//         for(int i=0; i<len; i++) {
//             //RULE 2: At least one numeric digit in it
//             if(str[i]>='0' && str[i]<='9') {
//         isDigit = true;
//             }
//             //RULE 3: At least one Capital letter 
//             else if(str[i]>='A'&&str[i]<='Z'){
//         isCap=true;
//             }
//             //RULE 4: Must not have space or slash
//             if(str[i]==' '|| str[i]=='/')
//         isSlashSpace=true;
//         }
//         //RULE 5: Starting character must not be a number
//         isNumStart = (str[0]>='0' && str[0]<='9');
//         //FYI: In C++, if int data type function returns the true then it prints 1 and if false then it prints 0
//         return isDigit && isCap && !isSlashSpace && !isNumStart;
//     }
// int main() {
//         char password[100];
//         cout<<"Enter the Password\n";
//         cin>>password;
//         cout<<"The output is =\n";
//         cout<<CheckPassword(password);
// }