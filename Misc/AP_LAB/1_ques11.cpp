#include <bits/stdc++.h>
using namespace std;
int mostFrequent(int arr[], int n)
{
	int maxct = 0;
	int max = -1;
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (arr[i] == arr[j])
				count++;
		}
		if (count > maxct) {
			maxct = count;
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	int arr[] = {7, 8, 11, 12, 7, 8, 3, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "The element with maximum frequency is: "<<mostFrequent(arr, n);
	return 0;
}

