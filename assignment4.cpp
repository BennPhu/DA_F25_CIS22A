/*Benn Nguyen
 *10/23/2025
 *Assignment 4
 *This program calculate your monthly bills based on:
 *your subscription package and number of minutes used.
 *Also, it will show you how much money you could save
 *if you choose a different package */

#include <iostream>
#include <cmath>
using namespace std;

int minutes_used;

int min_input() {
    cout << "How many minutes were used? ";
    cin >> minutes_used;
    return minutes_used;
}

// int total_fee_calculation () {
//     // total_amount_A = MONTHLY_FEE_A + (minutes_used * ADDITIONAL_MINUTES_RATE_A);
//     // total_amount_B = MONTHLY_FEE_B + (minutes_used * ADDITIONAL_MINUTES_RATE_B);
//     // total_amount_C = MONTHLY_FEE_C + (minutes_used * ADDITIONAL_MINUTES_RATE_C);
//
//     int minutes_extra_A = minutes_used - MINUTES_INCLUDED_A;
//     total_amount_A = MONTHLY_FEE_A + (minutes_extra_A * ADDITIONAL_MINUTES_RATE_A);
//
//     int minutes_extra_B = minutes_used - MINUTES_INCLUDED_B;
//     total_amount_B = MONTHLY_FEE_B + (minutes_extra_B * ADDITIONAL_MINUTES_RATE_B);
//
//     total_amount_C = MONTHLY_FEE_C;
//
//     return total_amount_A,total_amount_B,total_amount_C;
// }

int main () {
    const float MONTHLY_FEE_A = 39.99, MONTHLY_FEE_B = 59.99, MONTHLY_FEE_C = 69.99;
    const float ADDITIONAL_MINUTES_RATE_A = 0.45, ADDITIONAL_MINUTES_RATE_B = 0.40;
    const float MINUTES_INCLUDED_A = 450, MINUTES_INCLUDED_B = 900;
    int package_choice;
    float total_amount_A;
    float total_amount_B;

    cout << "Select a subscription package: " << endl;
    cout << "1. Package A" << endl;
    cout << "2. Package B" << endl;
    cout << "3. Package C" << endl;
    cout << "4. Quit" << endl;
    cin >> package_choice;
    min_input();
    //Calculating Minutes Extra and Total Amount Fee from Package A
    if (minutes_used <= 450) {
        total_amount_A = MONTHLY_FEE_A;
    }
    else {
        total_amount_A = MONTHLY_FEE_A + ( (minutes_used - MINUTES_INCLUDED_A) * ADDITIONAL_MINUTES_RATE_A);
    }
    //Calculating Minutes Extra and Total Amount Fee from Package B
    if (minutes_used <= 900) {
        total_amount_B = MONTHLY_FEE_B;
    }
    else {
        total_amount_B = MONTHLY_FEE_B + ( fabs(minutes_used  - MINUTES_INCLUDED_B) * ADDITIONAL_MINUTES_RATE_B);
    }

    //Calculating Minutes Extra and Total Amount Fee from Package C
    float total_amount_C = MONTHLY_FEE_C;

    switch (package_choice) {
        case 1:

            cout << "Your total amount due is $" << total_amount_A << endl;

            if (total_amount_A > total_amount_B) {
                cout << "Saving with Package B: " << static_cast<float>(total_amount_A - total_amount_B) << endl;
            }
            else {
                cout << "Package B: No Saving!\n";
            }
            if (total_amount_A > total_amount_C) {
                cout << "Saving with Package C: " << static_cast<float>(total_amount_A - total_amount_C) << endl;
            }
            else {
                cout << "Package C: No Saving!\n";
            }
            break;
        case 2:
            cout << "Your total amount due is $" << total_amount_B << endl;

            if (total_amount_B > total_amount_A) {
                cout << "Saving with Package A: " << static_cast<float>(total_amount_B - total_amount_A) << endl;
            }
            else {
                cout << "Package A: No Saving!\n";
            }
            if (total_amount_B > total_amount_C) {
                cout << "Saving with Package C: " << static_cast<float>(total_amount_B - total_amount_C) << endl;
            }
            else {
                cout << "Package C: No Saving!\n";
            }
            break;
        case 3:
            cout << "Your total amount due is $" << total_amount_C << endl;

            if (total_amount_C > total_amount_A) {
                cout << "Saving with Package A: " << static_cast<float>(total_amount_C - total_amount_A) << endl;
            }
            else {
                cout << "Package A: No Saving!\n";
            }
            if (total_amount_C > total_amount_B) {
                cout << total_amount_C << total_amount_B;
                cout << "Saving with Package B: " << static_cast<float>(total_amount_C - total_amount_B) << endl;
            }
            else {
                cout << "Package B: No Saving!\n";
            }
            break;
        default:
            cout << "The valid choices are 1 through 4. Run the program again and select one of those." << endl;
            break;
    }

    return 0;
}

/*Sample Runs:
Select a subscription package:
1. Package A
2. Package B
3. Package C
4. Quit
3
How many minutes were used? 500
The total amount due is $69.99
Savings with Package A: $7.50
Savings with Package B: $10.00
______________________________________________________________________
Select a subscription package:
1. Package A
2. Package B
3. Package C
4. Quit
5
The valid choices are 1 through 4. Run the
program again and select one of those.
______________________________________________________________________
Select a subscription package :
1. Package A
2. Package B
3. Package C
4. Quit
1
How many minutes were used? 450
The total amount due is $39.99
Savings with Package B: No Saving!
https://deanza.instructure.com/courses/41943/assignments/1380602?module
item
id=3779301 2/4_
_
10/23/25, 9:50 PM Savings with Package C: No Saving!
CIS Assignment 4
______________________________________________________________________
Select a subscription package :
1. Package A
2. Package B
3. Package C
4. Quit
1
How many minutes were used? 500
The total amount due is $62.49
Savings with Package B: $2.50
Savings with Package C: No Saving!
______________________________________________________________________
Select a subscription package :
1. Package A
2. Package B
3. Package C
4. Quit
2
How many minutes were used? 500
The total amount due is $59.99
Savings with Package A: No Saving!
Savings with Package C: No Saving!
______________________________________________________________________
Select a subscription package :
1. Package A
2. Package B
3. Package C
4. Quit
2
How many minutes were used? 200
The total amount due is $59.99
Savings with Package A: $20.00
Savings with Package C: No Saving!
*/