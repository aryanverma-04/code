#include <bits/stdc++.h>
using namespace std;
void merge2Arrays(int *arr, int s, int e)
{
    int mid = (s+e)/2;
    
    int size1 = mid - s + 1;
    int size2 = e - mid;

    int *temp1 = new int[size1];
    int *temp2 = new int[size2];

    int mainArrayIndex = s;
    for (int i = 0; i < size1; i++)
    {
        temp1[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex= mid + 1;
    for (int i = 0; i < size2; i++)
    {
        temp2[i] = arr[mainArrayIndex++];
    }

    // Merge 2 Sorted Arrays

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while (index1 < size1 && index2 < size2)
    {
        if(temp1[index1] < temp2[index2]){
            arr[mainArrayIndex++] = temp1[index1++];
        }
        else{
            arr[mainArrayIndex++] = temp2[index2++];
        }
    }
    while (index1 < size1)
    {
        arr[mainArrayIndex++] = temp1[index1++];
    }
    while (index1 < size1)
    {
        arr[mainArrayIndex++] = temp2[index2++];
    }
    delete []temp1;
    delete []temp2;
}
void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s+e)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge2Arrays(arr, s, e);
}
int main()
{
    int arr[6] = {10, 2, 23, 22, 4, 5};
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i]<<" ";
    }cout<<endl;
    mergeSort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}