#include<iostream>
#include<string>
#include<algorithm>
#include<functional>

using namespace std;
int main(){
    int arr[] = {12,93,3,88,44};
    for (int i = 0; i < 5;i++)
    {
        cout<<arr[i]<<" ";
    }
    sort(arr,arr+5);
    cout<<endl;
    for (int i = 0; i < 5;i++)
    {
        cout<<arr[i]<<" ";
    }
    sort(arr,arr+5,greater<int>());
        cout<<endl;

    for (int i = 0; i < 5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}