#include<iostream>
using namespace std;
void display(int a[], int s){
    cout<<endl;
    for (int i = 0; i < s; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int insertion(int arr[], int size, int index, int element){
    for (int i = size - 1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;    
}
void deletion(int arr[], int size, int index){
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
}
bool issorted(int arr[], int size){
    for (int i = 0; i < size -1; i++)
    {
        if (arr[i]<arr[i-1])
        {
            return false;
        }
        
    }
    return true;
    
}
// ! Program to find the second largest element in an array.

int secondlargest(int arr[], int size){
    int res = -1, largest = 0;
    for (int i = 1; i < size -1; i++)
    {
        if (arr[i]>arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest]){
            if (res == -1 || arr[i]> arr[res])
            {
                res = i;
            }
            
        }
    }
    return res;
}

void reverse(int arr[], int size, int start, int end){
    while (end>=start)
    {
        swap(arr[start], arr[end]);
        start++; end--;
    }
    // display(arr,4);

}

int removeSame(int arr[], int size){
    int res = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i]!=arr[res-1])
        {
            arr[res] = arr[i];
        res++;
        }
    }
    display(arr, 9);
    return res;
}

void leftrotate(int arr[], int size){
    int start = 0, end = size;
    int temp = arr[0];
    for (int i = 0; i < size; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[end-1] = temp;
    display(arr, 6);
    
}
// void drotate(int arr[], int d, int n){
//     for (int i = 0; i < d; i++)
//     {
//         leftrotate(arr, n);
//     }
    
// }

void d2rotate(int arr[], int n, int d){
    reverse(arr, 6, 0, d-1 );
    reverse(arr, 6, d, n-1 );
    reverse(arr, 6, 0, n-1 );
}
int main(){
    int arr[6] = {10, 20, 30, 40, 50, 60};
    display(arr, 5);
    // insertion(arr, 5, 3, 99);
    // display(arr, 6);
    // deletion(arr, 5, 3);
    // display(arr, 5);
    // cout<<endl<<issorted(arr, 5)<<endl;
    // cout<<secondlargest(arr,6);
    // display(arr,4);
    // reverse(arr, 4);
    // cout<<removeSame(arr, 6);
    // display(arr,6);
    // leftrotate(arr, 6);
    // drotate(arr, 3, 6);
    d2rotate(arr, 6, 2);
    display(arr, 6);
    return 0;
}