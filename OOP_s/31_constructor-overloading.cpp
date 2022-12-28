#include<iostream>
#include<string>
using namespace std;
class checkvehicle{
    public:
    checkvehicle(int a, int b){
        cout<<"Two wheeler, Your challan is 1800\n";
    }
    checkvehicle(int a, int b,int c){
        cout<<"Three wheeler, Your challan is 2100\n";
    }
    checkvehicle(int a, int b,int c,int d){
        cout<<"four wheeler, Your challan is 2500\n";
    }
    
};
int main(){
    checkvehicle v1(1,1),v2(1,1,1),v3(1,1,1,1);
    
return 0;
}