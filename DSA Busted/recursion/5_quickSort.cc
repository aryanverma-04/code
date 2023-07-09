//! Quick Sort using c++
#include<bits/stdc++.h>
using namespace std;
int partition(int *arr, int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i = s+1; i <= e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }
    int pivotIndex = s + cnt;
    swap(arr[s], arr[pivotIndex]);
    int start = s;
    int end = e;
    while (start < pivotIndex && e > pivotIndex)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if(start < pivotIndex && end > pivotIndex){
            swap(arr[start++], arr[end--]);
        }
        
    }
    return pivotIndex;
    
}
void quickSort(int *arr, int s, int e){
    if(s >= e)
        return;
    int p = partition(arr, s, e);
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}
int main()
{
    int arr[] = {10, 2, 4, 5, 11, 3};
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    quickSort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"end";
    return 0;
}