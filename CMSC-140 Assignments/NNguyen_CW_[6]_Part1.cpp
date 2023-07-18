/*
 * Class: CMSC140 CRN 40375
 * Instructor: Professor McGowan
 * Classwork 6 - Part 1 
 * Description: 
 * Due Date: 
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Nicholas Nguyen
*/

#include <iostream>
#include <string>
using namespace std;

int getChoice();
bool validateChoice(int);
void getNumbers(int&, int&);
int addition(int, int);
int subtraction(int, int);



int main(){
    int num1, num2, choice;

    do {
        choice = getChoice();
    } while (!(validateChoice(choice)));

    getNumbers(num1, num2);

    int result;
    if (choice == 1){
        result = addition(num1, num2);
        cout << "The result of this operation is: " << result;
    } else if (choice == 2){
        result = subtraction(num1, num2);
        cout << "The result of this operation is: " << result;
    }

}

int getChoice(){
    int choice;
    cout << "Enter 1 for addition, 2 for subtraction: ";
    cin >> choice;
    if (!(choice == 1 || choice == 2)){
            cout << "Invalid choice. Please try again.\n"
                 << "Enter 1 for addition, 2 for subtraction: ";
            cin >> choice;
        }
        return choice;

    } 

bool validateChoice(int choice){
    return (choice == 1 || choice == 2);
}

void getNumbers(int &num1, int &num2){
    cout << endl << "Please enter your first number: ";
    cin >> num1;
    cout << "Please enter your second number: ";
    cin >> num2;

}

int addition(int num1, int num2){
    return num1 + num2;
}

int subtraction(int num1, int num2){
    return num1 - num2;

}