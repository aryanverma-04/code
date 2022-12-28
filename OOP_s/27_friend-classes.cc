#include<iostream>
#include<string>
using namespace std;
class complex;
class calculator{
    public:
    int sumreal(complex,complex);
    int sumcomplex(complex,complex);
};
class complex{
    int a, b;
    public:
        void setdata(int x,int y){
        a = x;
        b = y;
    }
    void printdata(){
        printf("Your complex equation is : %d + i%d\n",a,b);
    }
    friend int calculator :: sumreal(complex, complex);
    friend int calculator :: sumcomplex(complex, complex);
};
int calculator :: sumreal(complex o1, complex o2){
    return (o1.a + o2.a);
}
int calculator :: sumcomplex(complex o1, complex o2){
    return (o1.b + o2.b);
}
int main(){
    complex o1, o2;
    o1.setdata(1, 4);
    o2.setdata(5, 7);
    calculator calc;
    int res = calc.sumreal(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumcomplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
return 0;
}   