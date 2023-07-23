//! differenceofSum
#include<bits/stdc++.h>
using namespace std;
int differenceofSum(int n, int m){
    int divisible = 0;
    int notDivisible = 0;
    for (int i = 1; i <= m; i++)
    {
        if(i % n == 0){
            divisible = divisible + i;
        }
        else{
            notDivisible = notDivisible + i;
        }
    }
    if (divisible > notDivisible){
        return divisible - notDivisible; 
    }
    else{
        return notDivisible - divisible;
    }
}
int main()
{
    cout<<differenceofSum(3, 10);
    return 0;
}