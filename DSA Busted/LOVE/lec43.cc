//! OOPS PART 2

#include<bits/stdc++.h>
using namespace std;
class Human{

    protected:

    int height; 
    int weight;

    public:
    void getDetails(){
        cout<<"The height is: "<<height<<endl;
        cout<<"The weight is: "<<weight<<endl;
    }
};

class Male : public Human{
    
    string gender = "male";

    public:
    void getDetails(){
        cout<<"The height is: "<<height<<endl;
        cout<<"The weight is: "<<weight<<endl;
        cout<<"The gender is: "<<gender<<endl;
    }

};
int main()
{
    Human h1;
    // h1.height = 10;

    h1.getDetails();
    Male m1;
    // m1.height = 10;
    m1.getDetails();
    return 0;
}