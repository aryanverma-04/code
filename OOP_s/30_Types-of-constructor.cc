#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class point{
    int x; int y;
    public:
        point(int a, int b){
            x = a;
            y = b;
        }
        void printnum(void);
        friend int finddistance(point a, point b);
};
void point :: printnum(void){
    printf("The number is (%d,%d)\n",x,y);
}
int finddistance(point a, point b){
    int res = sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
    return res;
}
int main(){
    point p1(1,0);
    point p2(70,0);
    p1.printnum();
    p2.printnum();
    cout<<"The distance between two numbers is " <<finddistance(p1,p2);
return 0;
}