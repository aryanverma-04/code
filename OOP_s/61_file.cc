#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    ofstream fout("61_textFile.txt");
    fout<<name;
    fout.close();
    ifstream fin("61_textFile.txt");
    string temp;
    fin>>temp;
    getline(fin,temp);
    cout<<"Your name is : "<<temp;
    fin.close();
    return 0;
}