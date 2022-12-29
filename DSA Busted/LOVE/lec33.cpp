//! RECURSION 1: SUM OF ARRAY 2: Binary search
#include <bits/stdc++.h>
using namespace std;
int getSum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int remainingpart = getSum(arr + 1, size - 1);
    int sum = arr[0] + remainingpart;
    return sum;
}

bool linearSearch(int arr[], int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        return linearSearch(arr + 1, size - 1, key);
    }
}
 
int search(int arr[], int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    if(start > end){
        return -1;
    }
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] < key)
    {
        return search(arr, mid + 1, end, key);
    }
    else
    {
        return search(arr, start, mid - 1, key);
    }
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    cout << getSum(arr, 5) << endl;
    cout << linearSearch(arr, 5, 70) << endl;
    cout << search(arr, 0, 4, 40);
    return 0;
}