
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char data[200];
    ofstream outfile;
    outfile.open("database6.txt");
    cout<<"writing to the file"<<endl;
    cout<<"Enter the name: ";
    // cin>>data;
    cin.getline(data,200);
    // cout<<data;
    outfile<<data<<endl;
    // cout<<data;
    cout<<"enter age: ";
    cin>>data;
    outfile<<data<<endl;
    outfile.close();
    ifstream infile;
    infile.open("database.txt");
    cout<<"\nRead from a file"<<endl;
    cout<<"Age: "<<data<<endl;
    infile>>data;
    cout<<"Name: "<<data<<endl;
    infile.close();
    return 0;
}
