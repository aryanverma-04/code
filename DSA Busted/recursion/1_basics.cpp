//! Basics of Recursion
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n == 0){
        return 1;
    }
    // Recursive relation
    return n * factorial(n-1);
}
int powerOfTwo(int n){
    if(n == 0){
        return 1;
    }
    return 2 * powerOfTwo(n - 1);
}
void printer(int n){
    if(n == 0){
        return;
    }
    printer(n-1);
    cout<<n<<" ";
}
int main()
{
    cout<<factorial(5);
    cout<<endl;
    cout<<powerOfTwo(5);
    cout<<endl;
    printer(10000);
    return 0;
}