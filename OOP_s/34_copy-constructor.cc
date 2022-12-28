#include<iostream>
#include<string>
#include<vector>
using namespace std;
class copyconstructor{
    int num;
    public:
        copyconstructor(){
            num = 0;
        }
        copyconstructor(int n){
            num = n;
        }
        copyconstructor(copyconstructor &obj){
            cout<<"♠ Copy Constructor called ♠"<<endl;
            num = obj.num;
        }
        p(void){
            cout<<"The value is : "<<num<<endl;
        }
};
int main(){
    copyconstructor c1,c2,c3(c1);
    c1 = copyconstructor(19);
    c1.p();
    c2 = copyconstructor(10);
    c2.p();
    c3.p();
    return 0;
}