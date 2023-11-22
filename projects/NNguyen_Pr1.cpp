/*
 * Class: CMSC140 CRN 40375
 * Instructor: Professor McGowan
 * Project #1
 * Description: Two different minigames from a robot named Nao!
 * Due Date: 2023-02-14
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Nicholas Nguyen
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //constants
    const string robotName = "Nao";
    const int daysOfMonth = 30;
    const int goldfishYear = 5;
    const int dogYear = 7;
    const string programmerName = "Nicholas Nguyen";
    const int assignmentNumber = 1;
    const string dueDate = "February 14, 2023";

    //user-inputted variables
    string visitorName;
    int givenAge;

    //user-inputted numbers for second game
    int num1;
    int num2;  
 
    //conversions
    const int monthsInYear = 12;
    const int daysInYear = 360;
    const int hoursInYear = 8760;
    const long int minsInYear = 525600;
    const long int secsInYear = 31536000;
    
    cout << "******************** Robot Prototype Scripting ********************" << endl;
    cout << "Hello, welcome to Montgomery College! My name is " << robotName << ". May I have your name?" << endl;
    getline(cin, visitorName); //using getline() function because by cin doesnt take in blank spaces
    cout << "Nice to have you with us today, " << visitorName << "!" << endl;
    cout << "Let me impress you with a small game." << endl;
    cout << "Give me the age of an important person or pet to you." << endl;
    cout << "Please give me only a number: " << endl;
    cin >> givenAge;
    cout << "You have entered " << givenAge << "." << endl;
    cout << "\tIf this is for a person, the age can be expressed as: \n\t" << givenAge << endl;
    cout << "\tor " << monthsInYear * givenAge << " months." << endl;
    cout << "\tor " << daysInYear * givenAge << " days." << endl;
    cout << "\tor " << hoursInYear * givenAge << " hours." << endl;
    cout << "\tor " << minsInYear * givenAge << " minutes." << endl;
    cout << "\tor " << secsInYear * givenAge << " seconds." << endl;
    cout << "\tIf this is for a dog, it is " << dogYear * givenAge << " years old in human age." << endl;
    cout << "\tIf this is for a goldfish, it is " << goldfishYear * givenAge << " years old in human age.";
    
    cout << endl << endl;

    cout << "Let's play another game, " << visitorName << ". Give me a whole number." << endl;
    cin >> num1;
    cout << "Very well. Give me another whole number." << endl;
    cin >> num2;
    int sum = num1 + num2; //addition
    int quotient = num1 / num2; //division
    
    cout << "Using the operator '+' in C++, the result of " << num1 << " + " << num2 << " is " << sum << "." << endl;
    cout << "Using the operator '/' in C++, the result of " << num1 << " / " << num2 << " is " << quotient << "." << endl;

    double num1_double = static_cast<double>(num1); //num1 casted to double
    double num2_double = static_cast<double>(num2); //num2 casted to double
    double quotientInDouble = num1_double / num2_double;
    cout << "However, the result of " << num1_double << " / " << num2_double << " is about " << quotientInDouble << "." << endl << endl;

    cout << "Thank you for testing my program!" << endl;
    cout << "PROGRAMMER: " << programmerName << endl;
    cout << "CMSC140 Common Project " << assignmentNumber << endl;
    cout << "Due Date: " << dueDate;



    return 0;
}