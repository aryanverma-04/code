//! Hello
#include<bits/stdc++.h>
using namespace std;
int ProductSmallestPair(int arr[], int n, int sum){
    sort(arr, arr+n);
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int pairSum = arr[i] + arr[j];
        if(pairSum < sum){
            return (arr[i] * arr[j]);
        }
    }
    return -1;
}
int main()
{
    int arr[] = { 9, 8, 3, -7, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<ProductSmallestPair(arr, n, 6);
    return 0;
}