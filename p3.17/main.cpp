/*
 •• Business P3.17
 Write a program that reads in the name and salary of an employee. Here the salary will denote an hourly wage, such as $9.25. Then ask how many hours the employee worked in the past week. Be sure to accept fractional hours. Compute the pay. Any overtime work (over 40 hours per week) is paid at 150 percent of the regular wage. Print a paycheck for the employee.
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    cout << "enter name: ";
    string name;
    cin >> name;
    cout << "enter hourly wage: ";
    float wage;
    cin >> wage;
    cout << "hours worked past week? ";
    float hours;
    cin >> hours;
    float paycheck = wage * hours;
    float overtime = (hours - 40) * (wage / 2 + wage);
    
    if (hours > 40)
    {
        paycheck = (paycheck - (hours - 40) * wage) + overtime;
    }

    cout << name <<"'s paycheck" "\nhourly pay: " << wage << "\nhours worked: " << hours << "\novertime: " << hours - 40 << "\novertime pay: " << overtime << "\npaycheck: " << fixed << setprecision(2) << paycheck << endl;
}
