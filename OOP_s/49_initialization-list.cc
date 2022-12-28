#include<iostream>
#include<string>
using namespace std;
// we can initialize the objects of the class during the initialization of constructor
class init_list
{
    int a, b;
    public:
        init_list(int x, int y): a(x), b(y){
            cout<<"Constructor is initialized...";
        }
        void print(){
            printf("\nThe value of a is %d and b is %d",a,b);
        }
};
int main(){
    init_list l(10,20);
    l.print();
    return 0;
}