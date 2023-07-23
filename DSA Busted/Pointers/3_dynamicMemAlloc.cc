//! 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int *a = new int;
    // *a = 100;
    // cout<<*a<<endl;
    // int *arr = new int[4];
    // arr[1] = 108;
    // cout<<arr[1]<<endl;

    //* 2D arrays Dynamic Memeory creation

    int row;
    int col;
    cin>>row>>col;
    cout<<"Enter the element of the matrix you want to escape"<<endl;

    int* *arr = new int*[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)    
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;   
    }
    
    return 0;
}