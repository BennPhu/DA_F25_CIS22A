//BennNguyen_Exercise4.5
//8th Nov 2025
/* Write a complete program that
1. prompts the user to enter a character
2. determines whether it is a vowel or a Consonants using a switch statement.
*/

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char input;
    cout << "Welcome to our Vowel OR Consonants checker!\n";
    cout << "Please enter a character: ";
    cin >> input;
    input = static_cast<char>(tolower(input));
    switch (input) {
        case 'a':
            cout << "This is a Vowel\n";
            break;

        case 'e':
            cout << "This is a Vowel\n";
            break;

        case 'i':
            cout << "This is a Vowel\n";
            break;

        case 'o':
            cout << "This is a Vowel\n";
            break;

        case 'u':
            cout << "This is a Vowel\n";
            break;
        case 'y':
            cout << "Well, this depends. Sometimes, 'y' could be a consonant or a vowel. \n";
            break;

        default:
            cout << "This is a Consonant\n";
    }

    return 0;
}
/*
Sample Run 1:
Welcome to our Vowel OR Consonants checker!
Please enter a character: a
This is a Vowel
Sample Run 2:
Welcome to our Vowel OR Consonants checker!
Please enter a character: h
This is a Consonant
Sample Run 3:
Welcome to our Vowel OR Consonants checker!
Please enter a character: y
Well, this depends. Sometimes, 'y' could be a consonant or a vowel.
*/