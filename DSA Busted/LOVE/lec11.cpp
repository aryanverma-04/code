#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0, end = size -1;
    int mid = start + (end - start)/2;
    int ans = -10;
    while (start<=end)
    {
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]> key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = (start+end)/2;

    }
    return ans;
    
}
int main(){
    int arr[5] = { 32, 34, 56, 77, 78};
    cout<<binarySearch(arr, 5, 34);
    return 0;
}