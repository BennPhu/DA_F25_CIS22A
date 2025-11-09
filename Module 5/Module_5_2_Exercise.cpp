//BennNguyen_Exercise5.2
//9th Nov 2025
/*
Write a do while loop that asks the user to enter three numbers.
The program finds the smallest value and displays it.
The user should be asked if he or she wishes to perform the operation again.
If so, the loop should repeat; otherwise, it should terminate.
*/


#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3, smallest_Value;
    bool repeat_condition;
    char user_answer;

    do {
        //Prompt for the three numbers
        cout << "Enter three numbers: "; cin >> num1 >> num2 >> num3;

        //Find the smallest number in the list
        smallest_Value = num1;
        if (num2 < num1 && num2 < num3) {
            smallest_Value = num2;
        }
        else if (num3 < num1 && num3 < num2) {
            smallest_Value = num3;
        }
        cout << "The smallest value is: " << smallest_Value << endl;
        //Prompt user to use the program again
        cout << "Would you like to exit? y/n: ";
        cin >> user_answer;
        if (user_answer == 'y') {
            repeat_condition = true;
        }
        else (repeat_condition = false);

    } while (repeat_condition == false);

    cout << "Thank you and see you again!\n";
    return 0;
}
/*
Sample Run:
Enter three numbers: 8 6 2
The smallest value is: 2
Would you like to exit? y/n: n
Enter three numbers: 40 76 49
The smallest value is: 40
Would you like to exit? y/n: y
Thank you and see you again!
*/
