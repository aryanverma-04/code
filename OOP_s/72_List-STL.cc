#include <iostream>
#include <string>
#include <list>
using namespace std;
template<class t>
void InsertElement(list<t> &ll)
{
    cout << "Enter an element: ";
    t element;
    cin >> element;
    ll.push_back(element);
}
template<class t>
void RemoveElement(list<t> &ll)
{
    cout << "Removing element from the list " << endl;
    ll.pop_back();
}
void PrintElement(list<int> &ll)
{
    list<int>::iterator iter;
    for (iter = ll.begin(); iter != ll.end(); iter++)
    {
        cout << " " << *iter<<endl;
    }
}
int main()
{
    list<int> l1;
    InsertElement(l1);
    InsertElement(l1);
    InsertElement(l1);
    // PrintElement(l1);
    l1.sort();
    // PrintElement(l1);
    // list<int> l2;
    // InsertElement(l2);
    // InsertElement(l2);
    // InsertElement(l2);
    // l2.sort();
    // // PrintElement(l2);
    // PrintElement(l1);
    // cout<<"Element in the list 1: "<<endl;
    // PrintElement(l2);
    // cout<<"Element in the list 2: "<<endl;
    // l1.merge(l2);
    // cout<<"After merging both list we have :"<<endl;
    PrintElement(l1);
    // l1.reverse();
    // PrintElement(l1);

    return 0;
}