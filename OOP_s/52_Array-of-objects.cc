#include<iostream>
#include<string>
using namespace std;
class shop
{
    int item_no, item_price;
    public:
        void setdata(int n, int p){
            item_no = n;
            item_price = p;
        }
        void getdata(void){
            cout<<"The price of item id "<<item_no<<" is "<<item_price<<endl;
        }
};
int main(){
    cout<<"Enter the number of total things: ";
    int count;
    cin>>count;
    int j, k;
    shop *aryan = new shop[count];
    shop *ptrtemp = aryan;
    for (int i = 0; i < count; i++)
    {   
        cout<<"Enter the item id and item price: ";
        cin>>j>>k;
        aryan->setdata(j,k);
        aryan++;
    }
    for (int i = 0; i < count; i++)
    {
        cout<<"Item number: "<<i<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    
    
    return 0;
}   