//! Recursion: more problems    
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    return isSorted(arr+1, size - 1);
}

bool getSum(int *arr, int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    return isSorted(arr+1, size - 1);
}
int main()
{
    int *arr = new int[5] {10, 10, 30, 40, 50};
    int size = 5;
    cout<<"the size of the array is: "<<size<<endl;
    cout<<isSorted(arr, size);
    cout<<"new array"<<endl;
    return 0;
}