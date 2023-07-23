#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size, int element)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] > element)
        {
            end = mid - 1;
        }
        if (arr[mid] < element)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int recursiveBinarySearch(int arr[], int element, int start, int end)
{
    int mid = start + (end - start) / 2;
    if (start > end)
    {
        return -1;
    }
    else if (arr[mid] == element)
    {
        return mid;
    }
    else if (arr[mid] > element)
    {
        return recursiveBinarySearch(arr, element, start, mid - 1);
    }
    else
    {
        return recursiveBinarySearch(arr, element, mid + 1, end);
    }
}
int main()
{
    int arr[] = {10, 12, 14, 16, 18, 20};
    cout << binarySearch(arr, 6, 20);
    cout << endl;
    cout << recursiveBinarySearch(arr, 10, 0, 6);
    return 0;
}