#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = 0;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    for(int i = 0; i < size; i++){
        if(arr[i]>=0){
            continue;
        }
        else{
            swap(arr[i], arr[index]);
            index++;
        }
    }
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
	return 0;
}