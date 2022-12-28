#include<iostream>
#include<string>
#include<vector>
using namespace std;
template <class t>
void display(vector <t> v){
    cout<<"Displaying the elements in the vector.."<<endl;
    for (int i = 0; i < v.size(); i++)
    {       
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // vector <int> vec1;
    // int element;
    // // int size;
    // // vector <char> vec2;
    // // char element;
    // // vec2.pop_back();  
    // // vec2.pop_back();
    // int size = 4;
    // // cout<<"Enter the size of your vector: ";
    // // cin>>size;

    // for (int i = 0; i < size; i++)
    // {   
    //     cout<<"Enter the element "<<i+1<<" :";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    // vector <int> :: iterator iter = vec1.begin();
    // vec1.insert(iter,566);  
    // cout<<"After changing the vector..";
    // display(vec1);

    // vector <char> vecto(50000,'*');
    // display(vecto);  
    vector <int> vec11(4,10);
    display(vec11);
    return 0;
}