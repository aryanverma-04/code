#include<bits/stdc++.h>
using namespace std;
void showq(queue<int> q1){
    queue<int> q = q1;
    while (!q.empty())
    {
        cout<<"\t "<<q.front();
        q.pop();
    }
    
}
int main(){
    //! FOLLOW FIFO - First In First Out

    queue <int> myq;
    
    myq.push(1);
    myq.push(2);
    myq.push(3);
    myq.push(4);
    myq.push(5);
    myq.push(6);
    queue<int> q = myq;
    while (!q.empty())
    {
        cout<<"\t "<<q.front();
        q.pop();
    }
    // showq(myq);
    cout<<"\nThe value at the front is: "<<myq.front();
    cout<<"\nThe value at the back is: "<<myq.back();
    cout<<"\nPoping 2 elements...\n\n";
    myq.pop();
    myq.pop();

    queue<int> q1 = myq;
    while (!q1.empty())
    {
        cout<<"\t "<<q1.front();
        q1.pop();
    }
    // showq(myq);

}