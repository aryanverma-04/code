#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    // string s = "North East West South";
    // ofstream ss("60_text.txt");
    // ss<<s;

    string a;
    ifstream in("60_text.txt");
    in>>a;
    getline(in,a);
    cout<<endl;
    cout<<a;
    return 0;
}