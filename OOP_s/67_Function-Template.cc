#include<iostream>
#include<string>
using namespace std;
template<class num1 = float, class num2 = float>
num1 Percentage(num1 n1, num2 n2){
    // num1 a = (((n1 + n2)/2)*100); 
    num1 a = n1+n2;
    return a;
}
int main(){
    float a ;
    a =  Percentage(5,0);
    cout<<a;
    return 0;
}