#include <bits/stdc++.h>
using namespace std;
int deletionsRequired(string s)
{
    int count = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
            count++;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    string s;
    
    while (t--)
    {
        cin >> s;
        cout << deletionsRequired(s);
    }

    return 0;
}