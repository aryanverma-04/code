#include<iostream>
#include<string>
using namespace std;
template <class temp>
class vector{
    public:
    temp *arr;
    int size;

    vector(int m)
    {
        size = m;
        arr = new temp[size];
    }

    temp dotproduct (vector v)
    {
        temp d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d+this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main(){
    vector <float> v1(3);
    vector <float> v2(3);
    v1.arr[0]=1.4;
    v1.arr[1]=3.3;
    v1.arr[2]=0.1;
    v2.arr[0]=0.1;
    v2.arr[1]=1.9;
    v2.arr[2]=4.1;
    float num = v1.dotproduct(v2);
    cout<<"The dot product of two vectors is: "<<num;
    return 0;
}       