//!     Num 1: 451  Num 2: 349

#include<bits/stdc++.h>
using namespace std;
int NumberOfCarries(int num1, int num2){
 int carry = 0, sum, p, q, count = 0;
  while ((num1 != 0) && (num2 != 0))
    {
      p = num1 % 10;
      q = num2 % 10;
      sum = carry + p + q;
      if (sum > 9)
	{
	  carry = 1;
	  count++;
	}
      else
	{
	  carry = 0;
	}
      num1 = num1 / 10;
      num2 = num2 / 10;
    }
  while (num1 != 0)
    {
      p = num1 % 10;
      sum = carry + p;
      if (sum > 9)
	{
	  carry = 1;
	  count++;
	}
      else
	{
	  carry = 0;
	}
      num1 = num1 / 10;
    }
  while (num2 != 0)
    {
      q = num2 % 10;
      sum = carry + q;
      if (sum > 9)
	{
	  carry = 1;
	  count++;
	}
      else
	{
	  carry = 0;
	}
      num2 = num2 / 10;
    }
  return count;
}
int main()
{
    cout<<NumberOfCarries(451, 349);
    return 0;
}