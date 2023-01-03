//! Quick sort using recursion

#include<bits/stdc++.h>
using namespace std;

int partion(int *arr, int start, int end){
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if(arr[i]<=pivot)
            count++;
    }
    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);

    while (start < pivotIndex && end > pivotIndex){
        while (arr[start] < pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < pivotIndex && end > pivotIndex)
        {
            swap(arr[start], arr[end]);
        }
    }
    return pivotIndex;
}
void quickSort(int *arr, int start, int end){
    if(start>=end){
        return; 
    }
    int p = partion(arr, start, end);

    quickSort(arr, start, p - 1);
    quickSort(arr, p+1, end);

}

int main()
{
    int arr[5] = {10, 5, 8, 7, 2};

    quickSort(arr, 0, 4);

    for(int i = 0; i < 5; i ++){
        cout<<arr[i]<<" ";
        
    }    
    return 0;
}