//BennNguyen_Exercise4.4
//8th Nov 2025
/* This program estimates dog's age in equivalent human years.
Extend the program for dogYears to support age of 6 and age of 7.
Conversions are 6:42, 7:47.
*/

#include <iostream>
using namespace std;

int main()
{
    int dogAgeYears;

    cout << "Enter dog's age (in years): " << endl;
    cin >> dogAgeYears;

    switch (dogAgeYears) {
        case 0:
            cout << "That's 0..14 human years." << endl;
            break;

        case 1:
            cout << "That's 15 human years." << endl;
            break;

        case 2:
            cout << "That's 24 human years." << endl;
            break;

        case 3:
            cout << "That's 28 human years." << endl;
            break;

        case 4:
            cout << "That's 32 human years." << endl;
            break;

        case 5:
            cout << "That's 37 human years." << endl;
            break;

        case 6:
            cout << "That's 42 human years." << endl;
            break;

        case 7:
            cout << "That's 47 human years." << endl;
            break;

        default:
            cout << "Human years unknown." << endl;

    }

    return 0;
}
/*
Sample Run 1:
Enter dog's age (in years):
6
That's 42 human years.
Sample Run 2:
Enter dog's age (in years):
7
That's 47 human years.
*/