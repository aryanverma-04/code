//! Call by Value, Call by Reference, Call by Address
//! Pointers, addressing, referncing
//! Arrays, How to use array with pointers
// ! Access 2D array elements without pointers
//! Recursion

#include <bits/stdc++.h>
using namespace std;
int binary_conversion(int num)
    {
        if (num == 0)
        {
            return 0;
        }
        else{
            return (num % 2) + 10 * binary_conversion(num/2);
        }
    }

void printArray(int arr[], int start, int len)
{
    /* Recursion base condition */
    if(start >= len)
        return;
    printf("%d, ", arr[start]);
    
    printArray(arr, start + 1, len); 
}
int main(){
    int arr[3] = {1, 2, 3};
    // int *ptr=arr;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<*ptr;
    //     ptr++;
    // }
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // for (int i = 0; i < 3; i++)
    // {
    // int *ptr=*(arr+i);
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d ", (*ptr + j));
    //     }
        
    //         cout<<endl;
    // }
    
    //! Print binary equivalent of a decimal number using recursion

    int ans = binary_conversion(10);
    cout<<ans;

    printArray(arr, 0, 2);
    
    return 0;
}