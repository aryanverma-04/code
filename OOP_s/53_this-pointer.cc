#include<iostream>
#include<string>
using namespace std;
class these{
    int data;
    public:
        void setdata(int data){
            this->data=data;
        }
        void getdata(){
            cout<<"The value of the data is: "<<data<<endl;
        }
};
int main(){
    these t;
    t.setdata(19);
    t.getdata();
}