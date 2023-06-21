//! To Implement bitwise operator basics
#include<bits/stdc++.h>
using namespace std;
int getBit(int bits, int i){
    return ((bits & (1<<i)) != 0);
}
int setBits(int bits, int i){
    return ((bits |(1<<i)));
}
int clearBit(int bits, int i){
    int mask = (~(1<<i));
    return bits & mask;
}
int updateBit(int bits, int value, int pos){
    int mask = (~(1<<pos));
    bits = bits & mask;
    return (bits|(value<<pos));
    
}
int main()
{
    int a = 10, b = 5;
    // cout<<(a&b)<<endl;
    // cout<<(a|b)<<endl;
    // cout<<(a^b)<<endl;
    // cout<<(~a)<<endl;
    int bits = 5;
    cout<<getBit(bits, 0)<<endl;
    cout<<setBits(bits, 1)<<endl;
    cout<<getBit(bits, 1)<<endl;
    cout<<clearBit(bits, 0)<<endl;
    cout<<updateBit(bits, 0, 1);
    return 0;
}