#include<iostream>
#include<string>
using namespace std;
class student{
    protected:
        int roll_no;
    public:
        void set_roll_no(int n){
            roll_no = n;
        }
        void print_roll_no(){
            cout<<"The roll no for the student is: "<<roll_no<<endl;
        }
};
class test: public virtual student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(){
            cout<<"The marks in physics is: "<<physics<<endl<<"and the marks in maths is: "<<maths<<endl;
        }
};
class sports: public virtual student{
    protected:
        float score;
    public:
        void set_score(float s){
            score = s;
        }
        void print_score(){
            cout<<"The Sports score for the student is: "<<score<<endl;
        }
};
class result: public test, public sports{
    private:
        float result;
    public:
        void display_result(){
            result = maths + physics + score;
            print_roll_no();
            print_marks();
            print_score();
            cout<<"\n\n The result for the student is: "<<result<<" and percentage obtained is: "<<result/3;
        }
};
int main(){
    result aryan;
    aryan.set_roll_no(3651);
    aryan.set_marks(100,94.6);
    aryan.set_score(70);
    aryan.display_result();
    return 0;
}