#include <iostream>
using namespace std;

class Emi
{
public:
    int amount;
    int interest = 0;
    int year = 0;
    int emi = 0;

    void setData()
    {
        cout << "Enter amount : ";
        cin >> amount;
        cout<< "Enter Interest rate : ";
        cin >> interest;
        cout<<"Enter time duration for pay EMI (years) : ";
        cin>> year;
    }
    void calculate()
    {
         int totalAmount = (amount * interest * year / 100) + amount;
         emi = totalAmount / year;
    }
    void display()
    {
        cout<< "Emi: "<<emi;
    }
};

int main()
{
    Emi em1;
    em1.setData();
    em1.calculate();
    em1.display();
    return 0;
}