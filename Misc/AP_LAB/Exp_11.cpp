// ! Time complexity: O(n)
#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int A[], int N, int K)
{
    set<int> S;

    for (int i = 0; i < N; i++)
        S.insert(A[i]);

    auto it = S.begin();
    
    for (int i = 0; i < K - 1; i++)
        it++;

    return *it;
}

int main()
{
    cout << "Name: Aryan verma \nUID: 20BCS3651\n";
    int A[] = {7, 10, 4, 3, 3, 15};
    int N = 6;
    cout << "Array is: ";
    for (int x = 0; x < N; x++)
    {
        cout << A[x] << "  ";
    }
    cout << "\nEnter the value of K: ";
    int k;
    cin >> k;
    cout << "Kth Smallest: " << kthSmallest(A, N, k) << endl;
    return 0;
}

