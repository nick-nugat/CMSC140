/*
 * Class: CMSC140 CRN 40375
 * Instructor: Professor McGowan
 * Project 3
 * Description: Prints full name, total score, and average score
 * Due Date: 2023-06-19
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Nicholas Nguyen
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string fullName;
    int score1, score2, score3, score4, score5, totalScore;
    float averageScore;
    cout << "Enter Student's Full Name: ";
    getline(cin, fullName);
    cout << "\nEnter Syllabus Quiz Score ranging from 0 to 100: ";
    cin >> score1;
    cout << "\nEnter Chapter 1 Quiz Score ranging from 0 to 100: ";
    cin >> score2;
    cout << "\nEnter Chapter 2 Quiz Score ranging from 0 to 100: ";
    cin >> score3;
    cout << "\nEnter Exam Score ranging from 0 to 100: ";
    cin >> score4;
    cout << "\nEnter Practice Score ranging from 0 to 100: ";
    cin >> score5;
    averageScore = (score1 + score2 + score3 + score4 + score5)/5;
    cout << endl << fullName << ": Final Score: " << totalScore <<  " Average Score: " << fixed << setprecision(2) << averageScore;

    return 0;

}