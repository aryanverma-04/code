#include <bits/stdc++.h>
using namespace std;
int mostFrequent(int arr[], int n)
{
	unordered_map<int, int> h;
	for (int i = 0; i < n; i++)
		h[arr[i]]++;
	cout<<"Element  Frequency\n";
    for (auto x : h)
    cout << x.first << "\t " << x.second << endl;
	// int max_count = 0, res = -1;
	// for (auto i : h) {
	// 	if (max_count < i.second) {
	// 		res = i.first;
	// 		max_count = i.second;
	// 	}
	// }
    // cout<<"Element  Frequency\n";
    // for (auto x : h)
    // cout << x.first << "\t " << x.second << endl;
	// return res;
}

int main()
{
	int arr[] = {7, 8, 11, 12, 7, 8, 3, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "The element with maximum frequency is: "<<mostFrequent(arr, n);
	return 0;
}
