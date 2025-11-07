//
// Created by Benn on 11/6/25.
//

#include "Assignment5_benn.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name, line;
    int i,j, feet, inches, count = 0;


    ifstream file;
    file.open("num-1.txt");
    //read how many total lines
    if (file) {
        while (getline(file, line)) {
            count++;
        }
        cout << "There are: " << count << "lines";
    //Create a for loop interval for i number of lines
    for (i = 0; i < count; i++) {
        //Create an inner loop for total of 3 times to read and assign names, feet, inches
        cout << "Hello";
    }
    //Create an if statement to calculate if feet > 5.
    //If not, output cant calculate.


    }
    else {
        cout << "Failed to open file!";
    }




    return 0;
}