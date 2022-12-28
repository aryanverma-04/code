#include<iostream>
#include<string>
using namespace std;
template <class T1, class T2, class T3>
class calculator{
    public:
        T1 num1;
        T2 num2;
        T3 num3;
        
    calculator(T1 a, T2 b, T3 c){
        cout<<"Constructor Called..!!"<<endl;
        num1 = a;
        num2 = b;
        num3 = c;
    }
    void display(){
        cout<<"The value of num1 is: "<<num1<<endl;
        cout<<"The value of num2 is: "<<num2<<endl;
        cout<<"The value of num3 is: "<<num3<<endl;
    }
    void calculate(){
        T1 temp;
        temp = (num1+num2)/num3;
        cout<<"The value is: "<<temp<<endl;
    }
    
};
int main(){
    calculator <int, int, int> c2(22.5,3.6,8.99);
    c2.display();
    c2.calculate();

    return 0;
}