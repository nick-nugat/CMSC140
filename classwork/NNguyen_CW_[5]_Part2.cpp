/*
 * Class: CMSC140 CRN 40375
 * Instructor: Professor McGowan
 * Classwork 5 - Part 2
 * Description: Notes down personal info into a file called List.txt
 * Due Date: 2023-07-17
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Nicholas Nguyen
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    string name, 
           phoneNumber, 
           streetAddress, 
           city, 
           state, 
           zipCode;
    ofstream personalInfo;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your phone number: ";
    getline(cin, phoneNumber);

    cout << "Enter your street address: ";
    getline(cin, streetAddress);

    cout << "Enter your city: ";
    getline(cin, city);

    cout << "Enter your state: ";
    getline(cin, state);

    cout << "Enter your zip code: ";
    getline(cin, zipCode);

    cout << endl << "This is your information:" << endl << endl
         << "Name: " << name << endl
         << "Phone Number: " << phoneNumber << endl
         << "Address: " << streetAddress << endl
         << "\t " << city << ", " << state << ", " << zipCode;


    personalInfo.open("List.txt");
    personalInfo << name << endl
                 << phoneNumber << endl
                 << streetAddress << endl
                 << city << endl
                 << state << endl
                 << zipCode << endl;

    personalInfo.close();

    return 0;
}