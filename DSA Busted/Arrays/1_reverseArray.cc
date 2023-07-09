//! Reverse a array
#include<bits/stdc++.h>
using namespace std;
void reverseArray(int * arr, int n){
    int i = 0, j = n - 1;
    while (i <= j)
    {
        swap(arr[i++], arr[j--]);
    }
}
int main()
{
    int arr[10] = {19, 2, 33, 444, 2};
    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    reverseArray(arr, 10);
    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}