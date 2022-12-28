#include<iostream>
using namespace std;
class calc{
    public:
    int a;
    void getnum(){
        cout<<"Enter a number: ";
        cin>>a;
    }
    int sqnun(){
        a = a*a;
        return a;
    }
    int cunum(){
        a = a*a;
        return a;
    }
    void dispnum(){
        int sq = sqnun();
        int cu = cunum();
        cout<<"The sum is : "<<sq<<endl;
        cout<<"The cube is : "<<cu<<endl;
    }
};
int main(){
    calc c;
    c.dispnum();
    c.getnum();
    c.dispnum();
    return 0;
}