#include <iostream>
using namespace std;

int getMax(int arr[])
{
    // int size = sizeof(arr)/sizeof(arr[0]);
    int size = 5;
    // cout<<"\n The size of array is + "<<size;
    int maxi = INT32_MIN;
    // cout<<"INT MIN VALUE"<<maxi<<endl;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int getMin(int arr[])
{
    // int size = sizeof(arr)/sizeof(arr[0]);
    int size = 5;

    // cout<<"\n Min wala \nThe size of array is + "<<size;
    int maxi = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        maxi = min(maxi, arr[i]);
    }
    return maxi;
}

int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

void reverse(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start ++; end --; 
    }
}

void swapAlternate(int arr[], int size)
{
    int start = 0, end = 1;
    while (end <= size)
    {
        swap(arr[start], arr[end]);
        start += 2; end+= 2; 
    }
}
int findUnique(int arr[], int size)
{
    int start = 0, end = size;
    int unique = arr[0];
    for (int  i = 0; i < size; i++)
    {
        if (arr[i] == unique)
        {
            unique = arr[(i+ 1)];
        }
        
        
    }
    return unique;
    
}


int main()
{

    // int array[100] = { [0 ... 99] = -1 };
    // for (int  i = 0; i < 100; i++)
    // {
    // cout<<array[i]<<" ";
    // }

    // int n;
    // // cin>>n;
    // int arr[5]= {12, -98, 876, 66, 90};
    // // for (int i = 0; i < n; i++)
    // // {
    // //     cin>>arr[n];
    // // }
    // cout<<"\n\n Finding maxmimum and minimum element, Please wait :-)";

    // cout<<"\n\n wait";

    // // cout<<getMax(arr);
    // // cout<<"\n"<<getMin(arr);

    // int m = getMax(arr);
    // int nn = getMin(arr);

    // cout<<"\n\t"<<m<<" "<<nn;
    int arr[5] = {2, 1, 1, 2, 11};
    int size = 5;
    // cout << sum(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    // reverse(arr, size);
    // swapAlternate(arr, size);
    cout<<"\n Unique :"<<findUnique(arr, size);
    cout<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}