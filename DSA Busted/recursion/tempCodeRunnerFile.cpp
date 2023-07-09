#include<iostream>
using namespace std;
bool isSorted(int *arr, int a, int b, int size){
    if(arr[a] > arr[b]){
        return false;
    }
    if(b == size){
        return true;
    }
    return isSorted(arr, ++a, ++b, size);
}
bool isSortedOptimized(int *arr, int size){
    if(arr[0] > arr[1]){
        return false;
    }
    if(size == 0 || size == 1){
        return true;
    }
    return isSortedOptimized(arr+1, size - 1);
}
int arraySum(int *arr, int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    int sum = arr[0] + arraySum(arr+1, size -1);
    return sum;
}

// Program to Implement Linear SUm using RECURSION

bool linearSearch(int *arr, int size, int target){
    if(size < 0){
        return false;
    }
    if(arr[0] == target){
        return 1;
    }
    return linearSearch(arr+1, size -1 , target);
}
int main(){
    int arr[5] = {10, 11, 12, 14, 14};
    cout<<isSorted(arr, 0, 1, 5);
    cout<<isSortedOptimized(arr, 5);
    cout<<arraySum(arr, 5);
    cout<<linearSearch(arr, 5, 100);
    return 0;
}