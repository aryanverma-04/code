#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 10;
    int ans = 0, i = 0;
        // while (n!=0)
        // {
        //     int bit = (n&1);
        //     n = n >> 1;
        //     ans = (bit* pow(10,i)) + ans;
        //     i++;
        // }
    // i = 1;
    while (n!=0)
    {
        int bit = n%10;
        if(bit == 1){
            ans = ans + pow(2, i);
        }
        n = n/10;
        i++;
    }
    
    cout<<ans;

    return 0;
}