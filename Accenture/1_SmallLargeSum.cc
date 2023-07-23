#include<bits/stdc++.h>
using namespace std;
int print2largest(int arr[], int n, int index) {
	    int firstLargest = arr[index];
	    int secondLargest = -1;
	    for(int i = index; i < n; i= i + 2){
	        if(arr[i] > firstLargest){
	            secondLargest = firstLargest;
	            firstLargest = arr[i];
	        }
	        if(arr[i] > secondLargest && arr[i] < firstLargest){
	            secondLargest = arr[i];
	        }
	    }
	    return secondLargest;
}
int SmallLargeSum(int arr[], int n){
    int even = print2largest(arr, n, 0);
    int odd  = print2largest(arr, n, 1);
    cout<<even<<" "<<odd<<endl;
    return even > odd ? even + odd : odd + even; 
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<SmallLargeSum(arr, n);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int smallLargeSum(int *arr, int n) {
//     if(n <= 3) {
//         return 0;
//     }
//     //Here we use vector because we don't know the array size, 
//     //we can use array also but vector gives us more functionality than array
//     vector<int> arrEven, arrOdd;
//     //Break array into two different arrays even and odd
//     for(int i = 0; i < n; i++) {
//         //If Number is even then add it into even array
//         if(i % 2 == 0) {
//             arrEven.push_back(arr[i]);
//         }
//         else {
//             arrOdd.push_back(arr[i]);
//         }
//     }
//     //Sort the even array
//     sort(arrEven.begin(), arrEven.end());
//     //We use sort function from C++ STL library
//     //Sort the odd array
//     sort(arrOdd.begin(), arrOdd.end());
//     //Taking second largest element from both arrays and add them
//     return arrEven[1] + arrOdd[1];
// }
// // Driver code
// int main()
// {
//     int n;
//     cout<<"Enter How many elements you want to enter?\n";
//     cin>>n;
//     int arr[n];
//     //Get input from user
//     cout<<"Start entering the numbers\n";
//     for(int i = 0; i < n; i++) {
//         cin>>arr[i];
//     }
//     cout<<"Output is\n";
//     cout<<smallLargeSum(arr, n);
//     return 0;
// }