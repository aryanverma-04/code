#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, j, k, sum = 0;
    string m;
    cout << "Aryan verma, UID-20BCS3536, Class/Section-20BIS-KRG-1" << '\n';
    cout << "---- Experiment Output ----\n";
    cout << "Enter the message: ";
    cin >> m;
    string key;
    
    cout << "\nEnter the key ";
    cin >> key;
    int mod = key.size();
    j = 0;
    for (i = key.size(); i < m.size(); i++)
    {
        key += key[j % mod];
        j++;
    }
    string ans = "";
    for (i = 0; i < m.size(); i++)
    {
        ans += (key[i] - 'a' + m[i] - 'a') % 26 + 'a';
    }
    cout << "Encrypted message: " << ans << '\n';
    return 0;
}