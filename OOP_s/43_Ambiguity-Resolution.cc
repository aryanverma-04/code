#include<iostream>
#include<string>
using namespace std;
class func1{
    public:
        void m1(){
            cout<<"I'm the function from class func1";
        }
};
class func2{
    public:
        void m1(){
            cout<<"I'm the function from class func1";
        }
};
class func3: public func1, public func2{
    public:
    void m1(){
        func1 :: m1();
    }
};

int main(){
    func3 f;
    f.m1();      
    return 0;
}