#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"Enter the number of elements in array: ";
    int n;
    cin>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];    
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"\nThe element at "<<i<<" position is "<<arr[i];
    }

    delete[] arr;
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\nThe element at "<<i<<" position is "<<arr[i];
    }
    
    int a = 10, b = 90;
    int* my_pointer = &a;
    cout<<"\nThe value of a is: "<<*my_pointer;
    cout<<"\nThe value of b is: "<<b;
    cout<<"\nThe address of pointer is: "<<my_pointer;
    cout<<"\nThe address of a is: "<<&a;
    cout<<"\nThe address of b is: "<<&b;
    b = *my_pointer;
    
    cout<<"\nThe value of b after changing its value is: "<<b;
    return 0;
}