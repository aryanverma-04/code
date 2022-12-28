#include<bits/stdc++.h>
using namespace std;

void rowSum(int arr[4][4], int row, int col){
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];        
        }
    cout<<"the sum is: "<<sum;
    cout<<endl;
    }
}
int main(){
    int row = 4, col = 4;
    int arr[4][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}, {4, 44, 444, 4444}};
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }

    // for (int i = 0; i < col; i++)
    // {
    //     for (int j = 0; j < row; j++)
    //     {
    //         cin>>arr[j][i];
    //     }
        
    // }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<"Rowsum: ";;
    rowSum(arr, 4, 4);
}