#include<iostream>
#include<string>
using namespace std;
class base{
    public:
        int base_variable;
        void display(void)
        {
            cout<<"The value of base class variable is: "<<base_variable<<endl;
        }
};
class derived: public base
{
    public:
        int derived_variable;
        void display()
        {
            cout<<"The value of derived variable is: "<<derived_variable<<endl;
        }
};
int main(){
    base* base_class_pointer;
    derived* derived_class_pointer;

    base base_object;
    derived derived_object;

    base_class_pointer = &derived_object;
    base_class_pointer->base_variable=10;
    base_class_pointer->display();
    // base_class_pointer->derived_variable=30; This will throws an error

    derived_class_pointer = &derived_object;
    derived_class_pointer->derived_variable=40;
    derived_class_pointer->display();
    return 0;
}