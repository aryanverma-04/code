#include <bits/stdc++.h>
using namespace std;
void leftrotate(vector<int> &vec, int d)
{
    cout<<"The value of D is: "<<d<<endl;
    if (d == 0)
        return;
    

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = vec.size();
    int d = 4;
    cout << "Name: Aryan verma \nUID: 20BCS3651\n\n";
    leftrotate(vec, d);
    return 0;
}
