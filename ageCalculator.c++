#include <iostream>
using namespace std;

class Student
{
public:
    float age;
    int curDay = 16, curMonth = 6, curYear = 2023;
    int bDay = 20, bMonth = 5, bYear = 2003;

    void getAge()
    {
        // cout << "Enter your date of birth: " << endl;
        // cout << "Enter your day:\n";
        // cin >> bday;
        // cout << "Enter your month:\n";
        // cin >> bmonth;
        // cout << "Enter your years:\n";
        // cin >> byear;
    }

    void calculateAge()
    {
        if (curDay > bDay)
        {
            curDay -= bDay;
        }
        else
        {
            curMonth--;
            curDay += 30;
            curDay -= bDay;
            if (curDay > 30)
            {
                curDay = 0;
                curMonth++;
            }
        }

        if (curMonth > bMonth)
        {
            curMonth -= bMonth;
        }
        {
            curYear--;
            curMonth += 12;
            curMonth -= bMonth;
            if (curMonth >= 12)
            {
                curYear++;
                curMonth = 0;
            }
        }

        if (curYear > bYear)
        {
            curYear -= bYear;
        }
    }

    void display()
    {
        int totalMonth = curYear  *12 + curMonth;
        int totalDay = curYear * 365 + curMonth * 30 + curDay;
        int totalWeek = totalDay / 7; 
        int restDay = totalDay % 7;
        int hours = totalDay * 24;
        int minutes = hours * 60;
        int seconds = minutes * 60;

        cout << "Your are " << curYear << " Year " << curMonth << " Month " << curDay << " Day Old" << endl;
        cout << "Or " << totalMonth<< " Months " << curDay << " Day Old" << endl;
        cout << "Or " <<totalWeek<< " Months " << restDay << " Day Old" << endl;
        cout<<"Or " << totalDay <<" Days"<< endl;
        cout<<"Or " << hours <<" hours"<< endl;
        cout<<"Or " << minutes <<" minutes"<< endl;
        cout<<"Or " << seconds <<" seconds"<< endl; 
    }
};
int main()
{
    Student s1; // creating an object of Student
    s1.getAge();
    s1.calculateAge();
    s1.display();
    return 0;
}