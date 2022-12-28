#include<iostream>
#include<string>
using namespace std;
class number1{
    protected:
        int num1;
    public:
        void setnum1(int n){
            num1 = n;
        }
};
class number2{
    protected:
        int num2;
    public:
        void setnum2(int n){
            num2 = n;
        }
};
class number3{
    protected:
        int num3;
    public:
        void setnum3(int n){
            num3 = n;
        }
};
class sum : public number1, public number2, public number3{
    public:
    void show_sum(){
        cout<<"\n\nThe sum of three numbers is : "<<num1+num2+num3<<"\n\n";
    }
};
int main(){
    sum mynum;
    mynum.setnum1(10);
    mynum.setnum2(10);
    mynum.setnum3(10);
    mynum.show_sum();
    return 0;
}