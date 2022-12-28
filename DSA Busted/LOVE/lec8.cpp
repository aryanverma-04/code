#include<bits/stdc++.h>
using namespace std;

void nCr(int a, int b){
    int num = factr(a);
    int deno = factr(a) * factr(a - b);
    cout<<num/deno;
}

int fact(int n){
    int ans = 1;
    while(n>0){
        ans = ans * n;
        n--;
    }
    return ans;
}

int factr(int n){
    if (n<=1)
    {
        return 1;
    }
    else
        return n * factr(n - 1);
}
int main(){
    // cout<<"Enter the amount: ";
    // int amount; cin>>amount;
    // int rs100, rs50, rs20, rs1;
    // switch (1)
    // {
    // case 1:
    //     rs100 = amount/100;
    //     cout<<"RS 100: "<<rs100;
    //     amount = amount%100;
    //     // break;
    // case 2: 
    //     rs50 = amount/50;
    //     cout<<"\nRS 50: "<<rs50;
    //     amount = amount%50;
    // case 3:
    //     rs20 = amount/20;
    //     cout<<"\nRS 20: "<<rs20;
    //     amount = amount%20;
    // case 4: 
    //     rs1 = amount/1;
    //     cout<<"\nRS 1: "<<rs1;
    //     amount = amount%1;
    // default:
    //     break;
    // }

    // cout<<"Hello world";
    // int x = fact(7);
    // cout<<x;

    // int y = factr(7);
    // cout<<endl<<y;

    // int c = nCr(5, 20);
    nCr(10, 10);
    return 0;
}