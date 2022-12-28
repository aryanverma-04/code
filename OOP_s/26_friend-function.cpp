#include<iostream>
#include<string>
using namespace std;
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
    friend complex sumcomplex (complex x, complex y);
};
complex sumcomplex (complex x, complex y){
    complex temp;
    temp.setdata(x.a+y.a,x.b+y.b);
    return temp;
}
int main(){
    complex c1,c2, c3;
    c1.setdata(10,20);
    c1.printdata();
    c2.setdata(12,24);
    c2.printdata();
    c3 = sumcomplex(c1,c2);
    c3.printdata();
return 0;
}