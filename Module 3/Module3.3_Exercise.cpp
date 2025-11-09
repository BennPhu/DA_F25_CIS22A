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

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, city, college, profession, animal_type, pet_name;
    int age;
    //Prompt for user's input
    cout << "Welcome to the word game! Please enter the following information: \n";
    cout << "Your name: "; getline(cin, name);
    cout << "Your age when you went to college: "; cin >> age;
    cin.ignore();
    cout << "Name of your city: "; getline(cin, city);
    cout << "Name of your college: "; getline(cin, college);
    cout << "Your profession: "; getline(cin, profession);
    cout << "Your type of animal: "; getline(cin, animal_type);
    cout << "Your pet's name: "; getline(cin, pet_name);

    //Output story
    cout << "Great! Here is your story: \n";
    cout << endl;
    cout << "There once was a person named " << name << " who lived in " << city << ".\n";
    cout << "At the age of " << age << ", " << name << " went to college at "
         << college << " graduated and went to work as a " << profession << ".\n";
    cout << "Then, " << name << " adopted a(n) " << animal_type << " named " << pet_name <<".\n";
    cout << "They both lived happily ever after!" << endl;

    return 0;
}
/*
Sample Run:
Your name: John
Your age when you went to college: 25
Name of your city: San Francisco
Name of your college: UC Berkeley
Your profession: AI Engineer
Your type of animal: dog
Your pet's name: Melo
Great! Here is your story:

There once was a person named John who lived in San Francisco.
At the age of 25, John went to college at UC Berkeley graduated and went to work as a AI Engineer.
Then, John adopted a(n) dog named Melo.
They both lived happily ever after!
*/