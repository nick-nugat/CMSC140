/*
 * Class: CMSC140 CRN 40375
 * Instructor: Professor McGowan
 * Project 2
 * Description: (Give a brief description for Project)
 * Due Date: 2023-07-05
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
    //variables
    int input, tempInCelsius, tempInFarenheit, distanceInKilometers, weightInKilograms;
    float distanceInMiles, weightInPounds;
    string country;

    //conversions
    const float KILOMETERS_TO_MILES = 0.6;
    const float KILOGRAMS_TO_POUNDS = 2.2;

    cout << "Enter a country name: "; //prompts for country
    getline(cin, country);
    cout
    << "\nConverter Toolkit\n"
    << "--------------------\n"
    << " 1. Temperature Converter\n"
    << " 2. Distance Converter\n"
    << " 3. Weight Converter\n"
    << " 4. Quit\n";

    cout << "\nEnter a number: ";
    cin >> input;

    switch (input){
        case 1: 
            cout << "What is the temperature in celsius? ";
            cin >> tempInCelsius;
            tempInFarenheit = (9.0/5.0) * tempInCelsius + 32;
            cout << "It is " << tempInFarenheit << " in Farenheit.\n\n";
            cout << country << " sounds fun!";
            break;
        case 2:
            cout << "What is the distance in kilometers? "; 
            cin >> distanceInKilometers;
            if (distanceInKilometers > 0){
                distanceInMiles = distanceInKilometers * KILOMETERS_TO_MILES;
                cout << distanceInKilometers << " kilometers is " << fixed << setprecision(2) << distanceInMiles << " miles.\n\n";
                cout << country << " sounds fun!";
            }
            else if (distanceInKilometers < 0){
                cout << "Program does not convert negative numbers!"; 
                break;
            }
            break;
        case 3: 
            cout << "What is the weight in kilograms? "; 
            cin >> weightInKilograms;
            if (weightInKilograms > 0){
                weightInPounds = weightInKilograms * KILOGRAMS_TO_POUNDS;
                cout << weightInKilograms << " kilograms is " << fixed << setprecision(1) << weightInPounds << " pounds.\n\n";
                cout << country << " sounds fun!";
            }
            else {
                cout << "Program does not convert negative numbers!"; 
                break;
            }
            break;
        case 4: 
            cout << "Program ended. ";
            break;
        default:
            cout << "That is not a choice. Please enter another number.";
            break;
    }
    
    cout 
    << "\n\n\nThank you for testing my program!\n"
    << "Programmer: Nicholas Nguyen\n"
    << "CMSC-140 Common Project 2\n"
    << "Due Date: 2023-07-05\n";

    return 0;
}