//! Pointer
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num = 10;
    int *p = &num;
    // cout<<num<<endl;
    // cout<<&num<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;
    // cout<<&num<<endl;
    // int * u;
    // cout<<&u<<endl;
    // cout<<*u<<endl;

    // // int * nn = NULL;
    // // cout<<*nn<<endl;

    // int num1 = 3;
    // int a = num1;
    // a++;
    // cout<<num1<<endl;;

    // p = &num1;
    // *(p) = (*p)*(*p);
    // cout<<num1<<endl;
    // (*p)++;
    // cout<<num1<<endl;

    // int* q = p;
    // (*q)++;
    // cout<<num1<<endl;

    int* x = p + 1;
    cout<<&p<<endl;
    cout<<&x<<endl;
    x = x + 1;
    cout<<x<<endl;
    x = x + 1;
    cout<<x<<endl;
    cout<<&x<<endl;
    x = x - 1;
    cout<<x<<endl;
    cout<<&x<<endl;

    return 0;
}