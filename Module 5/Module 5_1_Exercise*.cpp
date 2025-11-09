//BennNguyen_Exercise5.1
//8th Nov 2025
/*
write a complete program that displays all the lower case letters; a - z
you must use while loop.
*/

#include <iostream>
using namespace std;

int main() {
    char letter = 'a';
    cout << letter;
    while (letter < 'z') {
        ++letter;
        cout << letter << " ";
    }
    return 0;
}
/*
Sample Run:
ab c d e f g h i j k l m n o p q r s t u v w x y z
*/