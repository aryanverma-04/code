#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Name: Aryan verma" << endl << "UID: 20BCS3651" << endl;
    string str;
    string ans = "";
    cout << "Enter String: ";
    cin >> str;
    int a = 0;
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[i + 1])
        {
            st.push(str[i]);
            st.pop();

            a = a + 1;
        }
        else
        {
            st.push(str[i]);
        }
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
   
    cout << "Minimum deletion required are: " << a << endl;
    cout << "String after removal of adjacent element: "<< ans << endl;
    return 0;
}
