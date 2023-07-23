//! 
#include<bits/stdc++.h>
using namespace std;
int OperationChoices(int a, int b, int c){
    if(c == 1){
        return a + b;
    }
    else if( c == 2){
        return a - b;
    }
    else if(c == 3){
        return a * b;
    }
    else if(c == 4){
        return a / b;
    }
}
int main()
{
    int a, b, c;
    cin>>c>>a>>b;
    cout<<OperationChoices(a, b, c);
    return 0;
}