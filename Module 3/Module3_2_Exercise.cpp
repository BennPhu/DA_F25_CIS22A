//BennNguyen_Exercise3.2
//8th Nov 2025
//Write a complete program that prompts the user to
//enter 3 integer numbers; num1, num2, num3.
//and calculates the following equation:
//(num1 + num2) / num3^5

#include "Module3_2_Exercise.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Please enter three integers: \n";
    cout << "Number 1: "; cin >> num1;
    cout << "Number 2: "; cin >> num2;
    cout << "Number 3: "; cin >> num3;
    float result = (num1 + num2) / (pow(num3,5));
    cout << fixed << setprecision(2);
    cout << "(num1 + num2) / num3^5 = " << result << endl;

    return 0;
}
/*
//Sample Run:
Please enter three integers:
Number 1: 5
Number 2: 2
Number 3: 3
(num1 + num2) / num3^5 = 0.03
*/