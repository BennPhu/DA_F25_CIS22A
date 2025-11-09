//BennNguyen_Exercise4.3
//8th Nov 2025
/*Finish the following program

‘A’ category (90–100),
‘B’ category (80–89),
“You Pass” category (60–79),
“You Fail” category (0–59).
"invalid" otherwise */

#include <iostream>
using namespace std;

int main()
{
    float average; // holds the grade average

    cout << "Input your average:" << endl;
    cin >> average;
    if( average >= 90 && average <= 100 )
        cout << 'A' << endl;
    else if( average >= 80 && average < 89)
        cout << 'B' << endl;
    else if( average >= 60 && average <= 79)
        cout << "You Pass" << endl;
    else if( average >= 0 && average <= 59)
        cout << "You Failed" << endl;
    else cout << "Invalid" << endl;

    return 0;
}
/*sample run1
Input your average:
85
B */
/*sample run2
Input your average:
30
You Fail */
/*sample run3
Input your average:
-12
Invalid */


