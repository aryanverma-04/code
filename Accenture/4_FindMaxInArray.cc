//!   
#include<bits/stdc++.h>
using namespace std;
void FindMaxInArray(int *arr, int n){
    int maxi = -1;
    int maxIndex = -1;
    for (size_t i = 0; i < n; i++)
    {
        if(maxi < arr[i]){
            maxi = arr[i];
            maxIndex = i;
        }
    }
    cout<<maxi<<" "<<maxIndex;
}
int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    FindMaxInArray(arr, n);
    return 0;
}