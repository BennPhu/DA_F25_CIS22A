// Assignment 5
// This program calculate users' idea body weight in pounds.
// Expected input in "names-1.txt" file as followed:
// Name (Ex: John Haha)
// Height in Feet (Ex: 6)
// Extra Inches (Ex: 5)

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;
    string temp_feet, temp_inches;

    ifstream file;
    file.open("names-1.txt");
    //check if the file can be opened or not
    if (!file) {
        cout << "Check again! File can't be opened!\n";
    }
    //This infinity loop will be executed until there is no line left
    while (true) {
        //take in value for the first line of name, if there is none -> break
        if (!getline(file, name)) break;
        //take in value for the second line of feet value, if there is none -> break
        if (!getline(file, temp_feet)) break;
        //take in value for the third line of inches, if there is none -> break
        if (!getline(file, temp_inches)) break;

        //Conversion from the string of the files to integers
        int feet = stoi(temp_feet);
        int inches = stoi(temp_inches);
        //Just used to check the types of these integers
            // cout << feet << " and " << inches << endl;
            // cout << typeid(feet).name() << endl;
            // cout << typeid(inches).name() << endl;

        //Main Calculation Of Idea Body Weight
        if (feet >= 5) {
            int idea_body_weight = 110 + ((feet - 5) * 12 + inches) * 5;
            cout << "The idea body weight for " << name << " is " << idea_body_weight << " pounds. \n";
        }
        else {
            cout << "I can't calculate the ideal body weight for " << name << "." << endl;
        }
    }
    file.close();
    return 0;
}
/*
Sample Run:
The idea body weight for Tom Atto is 185 pounds.
The idea body weight for Eaton Wright is 135 pounds.
The idea body weight for Cary Oki is 165 pounds.
I can't calculate the ideal body weight for Omar Ahmed.

*/