//! Pointers tutorial
#include <bits/stdc++.h>
using namespace std;

void pointerUpdate(int *ptr){ // this is pass by address
    *ptr = *ptr + 1;
}

void referenceUpdate(int &ptr){ // this is pass by reference

    ptr = ptr + 1;
}
int main(){
    // int num = 10;
    // // cout<<num<<endl;
    // // cout<<"The address of Num is: "<<addressof(num)<<endl;
    // cout<<"The address of Num is: "<<&num<<endl;

    // // int *ptr;
    // // cout<<*ptr<<endl;
    // // cout<<&ptr;

    // int *ptr = addressof(num);
    // int *ptr2 = ptr;
    // cout<<"The address stored in pointer ptr is "<<ptr<<endl;
    // cout<<"The address stored in pointer ptr is "<<&ptr<<endl;
    // cout<<"The address stored in pointer ptr is "<<*ptr<<endl;

    // cout<<"The address stored in pointer ptr2 is "<<ptr2<<endl;
    // cout<<"The address stored in pointer ptr2 is "<<&ptr2<<endl;
    // cout<<"The address stored in pointer ptr2 is "<<*ptr2<<endl;

    // (*ptr)++;
    // ptr++;

    // cout<<"The address of Num is: "<<addressof(num)<<endl;
    // cout<<"The address of Num is: "<<&num<<endl;
    // cout<<"The address stored in pointer ptr is "<<ptr<<endl;
    // cout<<"The address stored in pointer ptr is "<<&ptr<<endl;
    // cout<<"The address stored in pointer ptr is "<<*ptr<<endl;

    // cout<<"The address stored in pointer ptr2 is "<<ptr2<<endl;
    // cout<<"The address stored in pointer ptr2 is "<<&ptr2<<endl;
    // cout<<"The address stored in pointer ptr2 is "<<*ptr2<<endl;

    // int **ptp = &ptr2;
    // cout<<"The address stored in pointer ptp is "<<ptp<<endl;
    // cout<<"The address stored in pointer ptp is "<<&ptp<<endl;
    // cout<<"The address stored in pointer ptp is "<<*ptp<<endl;
    // cout<<"The address stored in pointer ptp is "<<**ptp<<endl;
    

    // int arr[10] = {10, 20, 30, 40, 50};
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<&arr[1]<<endl;
    // cout<<&arr[2]<<endl;

    // cout<<*arr<<endl;
    // cout<<*(arr + 1)<<endl;
    // cout<<(*arr + 1) + 1<<endl;
    // cout<<*arr + 1<<endl;

    // cout<<*(arr+4);

    // cout<<3[arr];

    // cout<<sizeof(arr)<<endl;
    // cout<<sizeof(arr[0])<<endl;
    // cout<<sizeof(arr)/sizeof(arr[0]);

    // int *o;
    // cout<<sizeof(*o);
    // cout<<sizeof(&o);
    // int **o2 = &o;
    // cout<<sizeof(o2);
    // cout<<sizeof(&o2);
    // cout<<sizeof(*arr)<<endl;
    // cout<<sizeof(&arr)<<endl;

    // int *temp = &arr[0];
    // cout<<temp<<endl;
    // cout<<&temp<<endl;
    // cout<<&arr<<endl;
    // cout<<*temp<<endl;

    // int *ptr = &arr[0];
    // cout << *ptr << endl;
    // ptr = ptr + 1;
    // cout << *ptr << endl;


    //! AB hum khelne wale hai pointer ke sath, pr is baar char arrays hongi interger wali chod do abki baari

    // char ch[5] = {'a', 'r', 'y', 'a', 'n'};
    // // cout<<ch;

    // cout<<&ch<<endl;
    // cout<<sizeof(ch)<<endl;

    // char *chptr = &ch[0];
    // cout<<chptr<<endl;
    // cout<<&chptr<<endl;
    // cout<<*chptr<<endl;

    // char temp = 'z';
    // char *p = &temp;

    // cout << &p << endl;

    //! AB hum pointer ko functions ke saath use krke dekhege

    // int x = 10;
    // int*temp = & x;
    // cout<<x<<endl;
    // pointerUpdate(temp);
    // cout<<x<<endl;
    // referenceUpdate(x);
    // cout<<x<<endl;
    
    return 0;
}