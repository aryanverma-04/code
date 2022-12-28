#include <iostream>
using namespace std;
class car
{
public:
    int regno[100], price[100];
    int counter = 0;
    void setprice();
    void getprice();
};
void car ::setprice()
{
    int num;
    cout << "Enter the number of cars: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the Registration number: ";
        cin >> regno[counter];
        cout << "Enter the price of car: ";
        cin >> price[counter];
        counter++;
    }
}
void car ::getprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of car with registration number " << regno[i] << " is " << price[i]<<endl;
    }
}
int main()
{
    car olx;
    olx.setprice();
    olx.getprice();
}