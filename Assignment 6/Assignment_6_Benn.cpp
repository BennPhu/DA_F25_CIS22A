//Assignment 6
//12 Nov 2025
//Each judges will input a score that is larger than 0
//and smaller than 20. The program will calculate the final
//performance score by averaging the two numbers received after
//removing the highest and lowest score.

#include <iostream>
#include <iomanip>
using namespace std;

void getJudgeData(int&);
void calcScore(double, double, double, double);
double findLowest(double, double, double, double);
double findHighest(double, double, double, double);

int main() {
    int input;
    //Get inputs from the judges
    getJudgeData(input);
    int score_1 = input;
    getJudgeData(input);
    int score_2 = input;
    getJudgeData(input);
    int score_3 = input;
    getJudgeData(input);
    int score_4 = input;

    //Calculating the final performance scores
    calcScore(score_1, score_2, score_3, score_4);

    return 0;
}

void getJudgeData(int& judge_score) {
    cout << "Enter the judge's score: "; cin >> judge_score;
    if (judge_score < 0 || judge_score > 20) {
        cout << "That is an invalid score. Please try again.\n";
        cout <<"The score must be from 0 to 20.\n";
        cout << "Enter the judge's score: "; cin >> judge_score;
    }
}

void calcScore(double score1, double score2, double score3, double score4) {
    //Call the findLowest function to receive the lowest score calculated.
    double lowest = findLowest(score1, score2, score3, score4);
    //Call the findHighest function to receive the highest score calculated.
    double highest = findHighest(score1, score2, score3, score4);
    //Calculating the sum of the 2 numbers without the extremes.
    double sum = (score1 + score2 + score3 + score4) - lowest - highest;
    //Set the result to 1 decimal place
    cout << fixed << setprecision(1);
    //Calculating the average of the two scores
    double average_of_two_scores = sum / 2.0;
    cout << "The performer's final score is " << average_of_two_scores;
}

double findLowest(double a, double b, double c, double d) {
    double lowest = a;
    if (b < lowest) lowest = b;
    if (c < lowest) lowest = c;
    if (d < lowest) lowest = d;
    return lowest;
}
double findHighest(double a, double b, double c, double d) {
    double highest = a;
    if (b > highest) highest = b;
    if (c > highest) highest = c;
    if (d > highest) highest = d;
    return highest;
}
/*Sample Run:
Enter the judge's score: 6
Enter the judge's score: 80
That is an invalid score. Please try again.
The score must be from 0 to 20.
Enter the judge's score: 19
Enter the judge's score: 10
Enter the judge's score: 8
The performer's final score is 9.0
Process finished with exit code 0
 */