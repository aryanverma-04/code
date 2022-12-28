#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map <string, int> school;
    school ["Aryan"] = (98);
    school ["Ayan"] = (90);
    school ["Kl-Rahul"] = 75;
    school.insert( { {"Rohan", 89}, {"Akshat", 46} } );

    map<string,int> :: iterator iter;
    for (iter = school.begin(); iter != school.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    return 0;
}   