#include<iostream>
#include<string>
using namespace std;
class base{
    public:
        int data1 = 10;
    protected:
        int data2 = 20;
    private:
        int data3 = 30;
};
class derived : protected base{
    public:
    void use_protected(){
        cout<<"The value of protected access modifier is : "<<data2;
    }
};
int main(){
    derived d;
    d.use_protected();
    return 0;
}