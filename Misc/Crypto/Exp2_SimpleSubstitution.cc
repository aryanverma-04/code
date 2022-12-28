#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;
    string s2 = "abcdefghijklmnopqrstuvwxyz";
    string s3 = "phqgiumeaylnofdxjkrcvstzwb";
    int c;
    cout << "Aryan verma, UID-20BCS3651, Class/Section-20BIS-KRG-1" << '\n';
    cout << "Experiment Output:-" << '\n';
    cout << "Enter your plain text which you want encrypt: ";
    getline(cin, s1);
    for (int i = 0; i < s1.length(); i++)
    {
        int j = s2.find(s1[i]);
        s1[i] = s3[j];
    }
    cout << endl
         << "Encrypted Text (Cipher Text) of the plain text is: " << s1
         << endl;
}