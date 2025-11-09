//BennNguyen_Exercise4.1
//8th Nov 2025
/*This program prints "You Pass" if a student's average is
 60 or higher and prints "You Fail" otherwise

use an if/else statement to achieve the required task.*/

#include <iostream>
using namespace std;

int main()
{
    float average; // holds the grade average

    cout << "Input your average:" << endl;
    cin >> average;

    if (average >= 60) {
        cout << "You Pass";
    }
    else {
        cout << "You Failed";
    }

    return 0;
}
/*
Sample Run 1:
Input your average:
10
You Failed
Sample Run 2:
Input your average:
90
You Pass
*/
