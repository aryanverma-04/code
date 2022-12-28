#include<iostream>
#include<string>
using namespace std;
class complex{
    int real, imaginary;
    public:
        void setdata(int a, int b){
            real = a;
            imaginary = b;
        }
        void printdata(){
            printf("The complex number equation is: %d + %di\n",real,imaginary);
        }
};
int main(){
    complex *num = new complex;
    complex *num2 = new complex;
    num->setdata(10,20);
    num->printdata();

    (*num2).setdata(12,24);
    num2->printdata();
    return 0;
}       