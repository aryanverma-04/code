#include<iostream>
#include<string>
using namespace std;
class complex{
    int a, b;
    public:
        void setdata(int d1, int d2){
            a = d1; b = d2;
        }
        void sumcomplex(complex c1, complex c2){
            a = c1.a + c2.a;
            b = c1.b + c2.b;
        }
        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
        void printer(){
            printf("The value is %d + i%d\n",a,b);
        }
};
class car{
    int regno;
    public: 
        void setrno(){
            cout<<"Enter the registration number: ";
            cin>>regno;
        }
        void getrno(){
            cout<<"The registration number of car number "<<" is "<<regno<<endl;
        }
};
int main(){
    cout<<"Enter the number of cars ";
    int carno;
    cin>>carno;
    car mygarage[carno];
    for (int i = 0; i < carno; i++)
    {
        mygarage[i].setrno();
    }
    for (int i = 0; i < carno; i++)
    {
        mygarage[i].getrno();
    }
    // Function as an argument //

    complex c1, c2, c3;
    c1.setdata(12,24);
    c1.printer();
    c2.setdata(10,20);
    c2.printer();
    c3.sumcomplex(c1,c2);
    c3.printer();
return 0;
}