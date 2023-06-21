#include <bits/stdc++.h>
using namespace std;
void modifyString(string &s, string  replace, string &newStr)
{
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        int k = 0;
        if (s[i] == replace[k] && i + replace.length() <= s.length())
        {
            int j;
            for (j = i; j < i + replace.length(); j++)
            {
                if (s[j] != replace[k])
                {
                    break;
                }
                else
                {
                    k = k + 1;
                }
            }
            if (j == i + replace.length())
            {
                ans.append(newStr);
                i = j - 1;
            }
            else
            {
                ans.push_back(s[i]);
            }
        }

        else
        {
            ans.push_back(s[i]);
        }
    }
    cout << ans;
}
int main()
{
    string S = "geeksforgeeks geeks";
    string replace = "eek";
    string newStr = "ok";
    modifyString(S, replace, newStr);

    return 0;
}
