/*
 * Class: CMSC140 CRN 40375
 * Instructor: Professor McGowan
 * Classwork 5 - Part 1
 * Description: Prints asterisks with different loops
 * Due Date: 2023-07-17
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Nicholas Nguyen
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //counters
    int index = 0, i = 0;

    //(i)
    cout << "(i)" << endl;
    while (index < 10){
        cout << "*";
        index++;
    }
        cout << endl << endl;
    //(ii)
    cout << "(ii)" << endl;
    do {
        cout << "*";
        i++;
    } while (i < 20);

        cout << endl << endl;
    //(iii)
    cout << "(iii)";
    for (int i = 0; i <= 10; i++){
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
        cout << endl;
    //(iiii)
    cout << "(iiii)";
    for (int i = 0; i <= 20; i++){
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
        cout << endl;

    //(v)
    cout << "(v)" << endl;
    for (int i = 10; i >= 0; i--){
        for (int j = i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
    
    //(vi)
    cout << "(vi)" << endl;
    for (int i = 20; i >= 0; i--){
        for (int j = i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}