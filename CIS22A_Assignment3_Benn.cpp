//Benn Nguyen
//10/16/2025
//Assignment 3
//This program calculates the retroactice pay due to employees.
//The workers have received a 7.6% pay increase, effective six months
//retroactively.

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int current_annual_salary;
    float new_annual_salary;
    float new_monthly_salary;
    float retroactive_salary;
    string username;
    const float INCREASE = 0.076;

    cout << "Welcome to the Retroactive Pay Program!" << endl;
    cout << "Enter your current annual salary: I'll return your new"
            " salary, monthly salary, and retroactive pay." << endl;
    cin >> current_annual_salary;

    //Calculating the new annual salary
    new_annual_salary = current_annual_salary * ( 1.0 + INCREASE);
    //Calculating the new monthly salary
    new_monthly_salary = new_annual_salary / 12;
    //Calculating the retroacrive salary
    retroactive_salary = (new_annual_salary - current_annual_salary) / 2;

    cout << fixed << setprecision(2) << "New annual salary: "
         << new_annual_salary << endl;
    cout << "New monthly salary: " << new_monthly_salary << endl;
    cout << "New retroactive pay due: " << retroactive_salary << endl;

    cout << "Enter your full name: " << endl;
    cin.ignore();
    getline(cin, username);
    cout << "It was nice working with you, " << username << "! Bye for now."
         << endl;

    return 0;
}
/*
Sample Run:
Welcome to the Retroactive Pay Program!
Enter your current annual salary: I'll return your new salary, monthly salary, and retroactive pay.
3578
New annual salary: 3849.93
New monthly salary: 320.83
New retroactive pay due: 135.96
Enter your full name:
Benn Nguyen
It was nice working with you, Benn Nguyen! Bye for now.

Process finished with exit code 0
*/