#include <iostream>
using namespace std;

class Factorial
{
public:
    int n;
    int fact = 1;
    void setPara()
    {
        cout << "Enter a number you want to calculate factorial: ";
        cin >> n;
    }
    void calculate()
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
       
    }
    void display()
    {
       cout << "Factorial of " << n << " is " << fact;
    }
};

int main()
{
    Factorial f1;
    f1.setPara();
    f1.calculate();
    f1.display();
    return 0;
}