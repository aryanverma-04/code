#include<iostream>
#include<string>
using namespace std;
class base1{
    protected:
        int data1;
    public:
        base1(int a){
            data1 = a;
            cout<<"Base 1 constructor called."<<endl;
        }
};
class base2{
    protected:
        int data2;
    public:
        base2(int a){
            data2 = a;
            cout<<"Base 2 constructor called."<<endl;
        }
};
class derived: public base1, public base2
{
    int data3, data4;
    public:
        derived(int j, int k, int l, int m): base1(j), base2(k){
            data3 = l;
            data4 = m;
            cout<<"Derived class constructor called."<<endl;
        }
        void printalldata(){
            cout<<"the value of data 1 is: "<<data1<<endl;
            cout<<"the value of data 2 is: "<<data2<<endl;
            cout<<"the value of data 3 is: "<<data3<<endl;
            cout<<"the value of data 4 is: "<<data4<<endl;
        }
};
// <<endl;
int main(){
    derived c(10,20,30,40);
    c.printalldata();
    return 0;
}