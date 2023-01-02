//! Merge Sort implementation
#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int start, int end){
    int mid = (start + end)/2;
    
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = start;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }
    
    // Merging 2 Sorted arrays

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1<len1 && index2 < len2)
    {
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;    
    
}

void mergeSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = s + (e - s)/2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    
    merge(arr, s, e);
}
int main()
{
    int arr[5] = {10, 33, 40, 2, 44};
    mergeSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}