//BennNguyen_Exercise3.3
//8th Nov 2025
/*Write a program that plays a word game with the user. The program should
 ask the user to enter the following:
• His or her name
• His or her age (make sure to use int, not string)
• The name of a city
• The name of a college
• A profession
• A type of animal
• A pet’s name

After the user has entered these items, the program should display the
following story, inserting the user’s input into the appropriate locations:

There once was a person named NAME who lived in CITY. At the age of AGE, NAME
went to college at COLLEGE NAME graduated and went to work as a PROFESSION.
Then, NAME adopted a(n)ANIMAL named PETNAME. They both lived happily ever after!
*/

#include "Module3_3_Exercise.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name, city, college, profession, animal_type, pet_name;
  int age;

  cout << "Welcome to the word game! Please enter the following information: \n";
  cout << "Your name: "; getline(cin, name);
  cin.ignore();
  cout << "Your age"; cin >> age;
  cout << "Name of your city: "; getline(cin, city);
  cin.ignore();
  cout << "Name of your college: "; getline(cin, college);

  cout << name << age << city << college;




 return 0;
}