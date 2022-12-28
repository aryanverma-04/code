#include<iostream>
#include<string>
using namespace std;
class categoryI{
    protected:
    string categoryI_name;
    public:
    void setcategoryI(string s){
        categoryI_name = s;
    }
    void getcategoryI(){
        cout<<"The category I is : "<<categoryI_name<<endl;
    }
};
class categoryII : public categoryI{
    protected:
    string categoryII_name;
    public:
    void setcategoryII(string ss){
        categoryII_name = ss;
    }
    void getcategoryII(){
        cout<<"The category II is : "<<categoryII_name<<endl;
    }
};
class categoryIII : public categoryII{
    protected:
    string categoryIII_name;
    public:
    void setcategoryIII(string ss){
        categoryIII_name = ss;
    }
    void get_Details(){
        getcategoryI();
        getcategoryII();
        cout<<"The category I is : "<<categoryIII_name;
    }
};

int main(){
    cout<<"This is a chart for Animal classification\n";
    categoryIII c;
    c.setcategoryI("Vertebrates");
    c.setcategoryII("Cold Blooded");
    c.setcategoryIII("Amphibians");
    c.get_Details();
    return 0;
}