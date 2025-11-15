//BennNguyen_Exercise5.3
//14th Nov 2025
/*
Write a program that asks the user for a positive integer no greater than 15.
Then it displays character 'X' as many times as the user input.
you must use for loop.
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    //Take input of number less than 15 only
    do {
        cout << "Enter a positive integer less than 15: ";
        cin >> number;
    } while (number > 15);
    //Print 'X' according to the number of valid input
    for (int i = 0; i < number; i++) {
        cout << 'X';
    }

    return 0;
}