//!
#include <bits/stdc++.h>
using namespace std;
class batsman
{
    int average;
    string team;
    string password = "a221";

    int age;
    char *name;
public:
    void setValues(int age, char name[], int average, string team, int size = 10)
    {
        // string pswd;
        // cout<<"Enter password ";
        // cin>>pswd;
        // if (1 == 1)
        // {
            this->age = age;
            this->average = average;
            this->team = team;
            for (size_t i = 0; i < size; i++)
            {
                this->name[i] = name[i];
            }
        // }
        // else
        // {
        //     cout << "Wrong password" << endl;
        // }
        cout << "name is: " << name << " age is: " << age << " \n Average is: " << average << " Teams is: " << team<<endl;
    }
    void getInfo()
    {
        cout << "name is: " << name << " age is: " << age << " \n Average is: " << average << " Teams is: " << team<<endl;
    }
    // batsman(batsman &ab){
    //     cout<<"Copy Constructor called"<<endl;
    //     char *ch = new char[strlen(ab.name) + 1];
    //     strcpy(ch, ab.name);
    //     this->name = ch;

    //     int *a = new int;
    //     *a = ab.age;
    //     this->age = *a;
    // }
    // batsman(){
    //     cout<<"Costructor Called"<<endl;
    // }
};
int main()
{
    // batsman *ab = new batsman();
    // char name[10] = "ab de vil";
    // ab->setValues(30, name, 54, "rcb");
    // ab->getInfo();
    // cout<<endl<<sizeof(batsman)<<endl;
    // cout<<endl<<sizeof(ab)<<endl;
    // cout<<endl<<sizeof(*ab)<<endl;

    // batsman *b(ab);
    // b->getInfo();
    // ab->name = "ramesh";
    // ab->getInfo();
    // b->getInfo();

    // ab->age = 122;
    // cout<<"age updated"<<endl;
    // ab->getInfo();
    // b->getInfo();

    //* So this is a exapmele of shallow copy that why ab is changing
    //! We can solve this using deep copy

    batsman vk;
    char ch[10] = "vrat kohl";
    vk.setValues(30, ch, 54, "rcb");
    vk.getInfo();
    return 0;
}