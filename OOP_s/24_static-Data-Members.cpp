#include <iostream>
#include <string>
using namespace std;
class bike
{
public:
    int regno;
    static int id;
    void getdata(void)
    {
        cout << "Enter the registration number: ";
        cin >> regno;
        id++;
    }
    void setdata(void)
    {
        cout << "The bike with id number " << id << " have registration number " << regno << endl;
    }
    static void getcount(void){
        cout<<"The value of static data member is : "<<id<<endl;
    }
};
int bike ::id = 4000;
int main()
{
    bike aryan, ayan, janu;
    aryan.getdata();
    aryan.setdata();
    bike :: getcount();

    ayan.getdata();
    ayan.setdata();
    bike :: getcount();

    janu.getdata();
    janu.setdata();
    bike :: getcount();

    return 0;
}