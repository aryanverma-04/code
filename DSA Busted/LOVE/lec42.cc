//! oops in cpp
#include <bits/stdc++.h>
using namespace std;
class database
{

public:
    int student_id;
    char *student_name;

    static int aryan;

    static int staticDetails(){
        cout<<" :::: ---- :::: The value is: "<<aryan;
    }

    database()
    {
        student_name = new char[10];
    }
    void getDetails()
    {
        cout << "The name of student id " << student_id << " is " << student_name;
        cout << "    address of name memeory " << &student_name << endl;
    }
    void setDetails(int id, char *name)
    {
        student_id = id;
        this->student_name = name;
    }
    // database(int student_id ){
    // this->student_id = student_id;
    // (*this).student_id = student_id;
    // }
    // // database(int student_id, char *name){
    // //     this->student_id = student_id;
    // //     this->student_name = new char[10];
    // //     this->student_name = student_name;
    // // }
    // database(database &temp){
    //     this->student_id = temp.student_id;
    //     this->student_name = temp.student_name;
    // }
};

int database :: aryan = 5;
int main()
{
    // database aryan;
    // aryan.getDetails();
    // aryan.setDetails(203651, "aryan verma");
    // aryan.getDetails();

    // database *ayan = new database;
    // cout<<"The name of student id "<<(*ayan).student_id<<" is "<<(*ayan).student_name<<endl;
    // ayan.student_id = 1992;
    // ayan.student_name = "ayan";
    // ayan->student_id = 193;
    // ayan->(*student_name) = "ayan";
    // cout<<"The name of student id "<<(*ayan).student_id<<" is "<<(*ayan).student_name<<endl;

    // database hanu;
    // cout << "size of hanu: " << sizeof(hanu);
    // string s;
    // cout << "\nthe size of string is: " << sizeof(s);
    // int *n = new int;
    // cout << "\nthe size of pointer is: " << sizeof(n);
    // string *student_name = new string;
    // cout << "\nthe size of string is: " << sizeof(student_name);
    // cout << "\nthe size of string is: " << sizeof(*student_name);

    // database *aa = new database(55);
    // aa->getDetails();
    // char ch[10] = "vishnu";
    // database ram;
    // ram.setDetails(1, ch);
    // ram.getDetails();

    // // database krishna = ram;
    // database krishna(ram);
    // krishna.getDetails();

    // ram.student_name = "hari";
    // krishna.student_id = 5000;
    // krishna = ram;
    // ram.getDetails();
    // krishna.getDetails();

    // cout<<database::aryan; 
    return 0;
}