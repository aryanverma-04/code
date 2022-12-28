#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int size){
        for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void reversearray(int arr[], int size){
    int j = 0, k = size - 1;
    while (j<k)
    {
        swap(arr[j], arr[k]);
        j++; k--;
    }
    printarray(arr, size);
    
}
void leftrotate(int arr[], int size){
    int temp = arr[0], i;
    
    for ( i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];

    }
    arr[i] = temp;
    printarray(arr, size);
}
void leftrotate_d(int arr[], int size, int d){
    int temp = arr[0], i;
    for (int j = 0; j < d; j++)
    {
            for ( i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];

    }
    arr[i] = temp;
    }
    printarray(arr, size);
}
int binarytodecimal(int number){
    int dec = 0, i = 0, rem;
    while (number!=0)
    {
        rem = number%10;
        number = number / 10;
        dec += rem * pow(2, i);
        i++;
    }
    return dec;
}
void func(int arr[], int size){

    int j = 0, k = size - 1;
    while(j<k)
    {
        if(arr[j] < 0){
            j++;
        }
        else if(arr[k] > 0){
            k--;
        }
        else{
            swap(arr[j], arr[k]);
            j++; k--;
        }
    }
    printarray(arr, size);
}



int main() {
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    // func(arr, size);
    // leftrotate(arr, size);

    // leftrotate_d(arr, size, 3);
    cout<< binarytodecimal(1010);

}