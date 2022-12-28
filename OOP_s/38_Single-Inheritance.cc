#include <iostream>
#include <string>
using namespace std;
class Mammels
{
public:
    string name;
    int id;
    void setdata(string s, int n)
    {
        name = s;
        id = n;
    }
    void getdata()
    {
        cout << "The name of the Mammel is " << name << " and research id is " << id << endl;
    }
    Mammels() {}
};
class Homosepians : Mammels
{
public:
    string Classname;
    Homosepians()
    {
        name = "Mammels";
        id = 101;
        Classname = "Homesepians TYPE-IV";
    }
    void setdata(int n, string s, string ss)
    {
        id = n;
        name = s;
        Classname = ss;
    }
    void getdata2()
    {
        cout << "The name of the Mammel is " << name << " and research id is " << id << " and they belongs to " << Classname << " category." << endl;
    }
};
int main()
{
    Mammels m1;
    m1.setdata("Bat", 101);
    m1.getdata();

    Homosepians male, female;
    male.getdata2();
    female.setdata(112, "Mammels", "Homesepians TYPE-XI");
    female.getdata2();
    return 0;
}