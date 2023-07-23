//! 
#include<bits/stdc++.h>
using namespace std;
int RatCountHouse(int arr[], int r, int u, int n){
    if (n == 0)
    return -1;
  int totalFoodRequired = r * u;
  int foodTillNow = 0;
  int house = 0;
  for (house = 0; house < n; ++house)
    {
      foodTillNow += arr[house];
      if (foodTillNow >= totalFoodRequired)
	{
	  break;
	}
    }
  if (totalFoodRequired > foodTillNow)
    return 0;
  return house + 1;
}
int main()
{
    int n; 
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<RatCountHouse(arr, 7, 2, 8);
    return 0;
}