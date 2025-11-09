//BennNguyen_Exercise4.1
//8th Nov 2025
/*
 This code is partially written for you, you need to add two lines only:
This program should do the following:
1. Ask the user to enter a number and save it in userNum.
2. Convert the value of userNum to 1, only if it is negative.
3. Display userNum.*/

#include <iostream>
using namespace std;

int main() {
    int userNum;

    cout << "enter a number: " ;
    cin >> userNum;

    if (userNum < 0) {
        userNum = 1;
    }


    cout << userNum;

    return 0;
}
/*sample run 1
enter a number: 0
0
*/
/*sample run 2
enter a number: 7
7
*/
/*sample run 3
enter a number: -9
1
*/