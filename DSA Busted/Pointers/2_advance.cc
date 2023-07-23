//! Pointers with arrays etc
#include<bits/stdc++.h>
using namespace std;
void update(int arr[], int n){
    cout<<"  Function started "<<endl;
    for (size_t i = 0; i < 6; i++)
    {
        cout<<*(arr+i)<<" ";
    }cout<<endl;
    for (size_t i = 0; i < 6; i++)
    {
        cout<<arr+i<<" ";
    }cout<<endl;
    arr[1] = 1223;
    for (size_t i = 0; i < 6; i++)
    {
        cout<<*(arr+i)<<" ";
    }cout<<endl;
    cout<<"  Function Ended "<<endl;
}
int main()
{
    // int arr[10] = {2, 30, 4, 5, 6, 7};
    // cout<<arr<<endl;
    // int* p = arr;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;

    // cout<<*arr<<endl;
    // cout<<*arr+3<<endl;
    // cout<<(*arr) + 4<<endl;
    // cout<<arr+1<<endl;
    // cout<<arr+2<<endl;
    // for (size_t i = 0; i < 6; i++)
    // {
    //     cout<<*(arr+i)<<" ";
    // }
    // for (size_t i = 0; i < 6; i++)
    // {
    //     cout<<arr+i<<" ";
    // }

    // cout<<2 [arr]<<"<- The value"<<endl;
    
    // int * a = arr;
    // cout<<arr<<endl;
    // cout<<a<<endl;
    // cout <<*a<<endl;
    // cout<<*arr<<endl;
    // cout<<*a+40<<endl;
    // cout<<*(a+40)<<endl;
    // cout<<&a<<endl;
    // a = a + 3;
    // cout<<"  Modified  "<<endl;
    // cout<<&a<<endl;
    // cout<<*a<<endl;
    // for (size_t i = 0; i < 6; i++)
    // {
    //     cout<<arr+i<<" ";
    // }
    // char ch[10] = "aryan";
    // cout<<ch<<endl;
    // char *ch1 = "H:H";
    // cout<<ch1<<endl;
    // char *p = &ch[0];
    // cout<<&ch<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
    // cout<<p<<endl;

    //? Pointers with funciton

    // int arr[10] = {12, 11, 23, 44, 53, 64};
    //     for (size_t i = 0; i < 6; i++)
    // {
    //     cout<<*(arr+i)<<" ";
    // }cout<<endl;
    // for (size_t i = 0; i < 6; i++)
    // {
    //     cout<<arr+i<<" ";
    // }cout<<endl;
    // update(arr, 6);
    // for (size_t i = 0; i < 6; i++)
    // {
    //     cout<<*(arr+i)<<" ";
    // }


    //! DOUBLE POINTER

    int num = 10;
    int *ptr = &num;
    cout<<&num<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;

    int **ptrToPtr = & ptr;
    cout<<&num<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ptrToPtr<<endl;
    cout<<&ptrToPtr<<endl;
    cout<<*ptrToPtr<<endl;
    cout<<**ptrToPtr<<endl;
    
    int*** ptrToPtrToPtr = &ptrToPtr;
    cout<<&num<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ptrToPtr<<endl;
    cout<<&ptrToPtr<<endl;
    cout<<*ptrToPtr<<endl;
    cout<<**ptrToPtr<<endl;
    cout<<ptrToPtrToPtr<<endl;
    cout<<&ptrToPtrToPtr<<endl;
    cout<<*ptrToPtrToPtr<<endl;
    cout<<**ptrToPtrToPtr<<endl;    
    cout<<***ptrToPtrToPtr<<endl;
    
    int**** ptrToPtrToPtrToPtr = &ptrToPtrToPtr;
    cout<<&num<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ptrToPtr<<endl;
    cout<<&ptrToPtr<<endl;
    cout<<*ptrToPtr<<endl;
    cout<<**ptrToPtr<<endl;
    cout<<ptrToPtrToPtr<<endl;
    cout<<&ptrToPtrToPtr<<endl;
    cout<<*ptrToPtrToPtr<<endl;
    cout<<**ptrToPtrToPtr<<endl;    
    cout<<***ptrToPtrToPtr<<endl;
    cout<<****ptrToPtrToPtrToPtr<<endl;
    
    
    return 0;
}