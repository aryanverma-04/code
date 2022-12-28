#include <bits/stdc++.h>
using namespace std;
int main()
{

    // int row, col;
    // cin>>row>>col;
    // int **arr = new int*[row];
    // for (int i = 0; i < row; i++)
    // {
    //     *(arr+i) = new int[col];
    // }

    // for (int  i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin>>arr[i][j];
    //     }

    // }
    // cout<<endl;
    // for (int  i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //! check krlena babbar bhaiya ke noted

    // for (int i = 0; i < row; i++)
    // {
    //     delete [] arr[i];
    // }
    // delete []arr;

    // for (int  i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    /* 1 2 3 4
       3 4 5 6
       5 6 7 8
    */
    int row;
    cin >> row;
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        int n;
        cout << "array 1st column size ";
        cin >> n;
        arr[i] = new int[n];
    }
    for (int  i = 0; i < row; i++)
    {
        for (int j = 0; j < sizeof(*arr) / sizeof(*arr[0]); j++)
        {
            cin>>arr[i][j];
        }

    }
    cout<<endl;
    for (int  i = 0; i < row; i++)
    {
        for (int j = 0; j < sizeof(arr[i])/sizeof(arr[i][0]); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}