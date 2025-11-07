// //Benn Nguyen
// //Assignment 2
// //08/10/2025
// //This is a calorie calculator that prompts for user's inputs on weight,
// //METs and minutes spent exercising to calculate user's total calories
// //burnt.
//
// #include <iostream>
// #include <iomanip>
//
// using namespace std;
//
// int main()
// {
// 	//Define variables
// 	string user_name;
// 	int weight_pounds;
// 	int number_METS;
// 	int minutes_spent;
//
// 	float weight_kg;
// 	float total_calories_burned;
// 	const float CALORIES_BURNT_CONVERSION  = 0.0175;
// 	const float KG_to_LBS_CONVERSION = 2.2;
//
// 	//User Greeting
// 	cout << "Hi! Please enter your name: ";
// 	getline(cin, user_name);
// 	cout << endl;
// 	cout << "Hi, " << user_name << "! Welcome to our calorie calculator."
// 		 << endl;
//
// 	//Main Program
// 	cout << "Please enter your weight in pounds (lbs): "
// 		 << endl;
// 	cin >> weight_pounds;
// 	cout << "Please enter your the number of METs for the activity: "
// 		 << endl;
// 	cin >> number_METS;
// 	cout << "Please enter your number of minutes spent exercising: "
// 		 << endl;
// 	cin >> minutes_spent;
//
// 	//Converting from pounds to kg
// 	weight_kg = (weight_pounds / KG_to_LBS_CONVERSION);
// 	//Calculating total calories burned
// 	total_calories_burned = CALORIES_BURNT_CONVERSION * number_METS
// 							* weight_kg * minutes_spent;
//
// 	//Output
// 	cout << "Amazing! Here is how much you burnt exercising: "
// 		 << endl;
// 	cout << fixed << setprecision(2) << total_calories_burned << " calories."
// 		 << endl;
// 	cout << "Thank you for using our service! <3"
// 		 << endl;
//
// 	return 0;
// }
//
// //Sample Run
// /*
//  Hi! Please enter your name: Benn Nguyen
//
//  Hi, Benn Nguyen! Welcome to our calorie calculator.
//  Please enter your weight in pounds (lbs):
//  140
//  Please enter your the number of METs for the activity:
//  6
//  Please enter your number of minutes spent exercising:
//  50
//  Amazing! Here is how much you burnt exercising:
//  334.09 calories.
//  Thank you for using our service! <3
//
//  Program ended with exit code: 0
//  */
