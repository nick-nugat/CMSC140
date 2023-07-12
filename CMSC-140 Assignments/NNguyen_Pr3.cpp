/*
 * Class: CMSC140 CRN 40375
 * Instructor: Professor McGowan
 * Project 3
 * Description: (Give a brief description for Project)
 * Due Date: 2023-07-17
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Nicholas Nguyen
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string chainLocation;
    int numberOfFloors, //cant exceed 5
        totalRoomsOnEachFloor, 
        occupiedPerType, //total rooms on each floor can't exceed 30 and occupied rooms can't exceed total rooms on that floor
        //rooms occupied
        singleRoomsOccupied,
        doubleRoomsOccupied,
        kingRoomsOccupied,
        suitesOccupied;
    cout << "**********BlueMont Hotel**********" << endl << endl;
    cout << "Enter the location of this hotel chain: ";
    cin >> chainLocation;
    cout << "Enter the total number of floors of the hotel: ";
    cin >> numberOfFloors;
    if (numberOfFloors < 1 || numberOfFloors > 5){
        cout << "The number of floors should be between 1 and 5. Please try again." << endl;
        cout << "Enter the total number of floors of the hotel: ";
        cin >> numberOfFloors;
    }
    for (int i = 1; i <= numberOfFloors; i++){
        cout << "Enter rooms on floor #" << i << ": ";
        cin >> totalRoomsOnEachFloor;
        if (totalRoomsOnEachFloor < 1 || totalRoomsOnEachFloor > 30){
            cout << "Total rooms must be between 1 and 30. Please try again." << endl;
            cout << "Enter rooms on floor #" << i << ": ";
            cin >> totalRoomsOnEachFloor;
        }
    }

    for (int i = 1; i <= numberOfFloors; i++){
        cout << "How many SINGLE rooms are occupied in floor #" << i << ": ";
        cin >> singleRoomsOccupied;
        cout << "How many DOUBLE rooms are occupied in floor #" << i << ": ";
        cin >> doubleRoomsOccupied;
        cout << "How many KING rooms are occupied in floor #" << i << ": ";
        cin >> kingRoomsOccupied;
        cout << "How many SUITE rooms are occupied in floor #" << i << ": ";
        cin >> suitesOccupied;

        if ((singleRoomsOccupied + doubleRoomsOccupied + kingRoomsOccupied + suitesOccupied) > totalRoomsOnEachFloor){
            cout << "The number of occupied rooms exceeds the total number of rooms on this floor. Please try again!" << endl;
            
            cout << "How many SINGLE rooms are occupied in floor #" << i << ": ";
            cin >> singleRoomsOccupied;
            cout << "How many DOUBLE rooms are occupied in floor #" << i << ": ";
            cin >> doubleRoomsOccupied;
            cout << "How many KING rooms are occupied in floor #" << i << ": ";
            cin >> kingRoomsOccupied;
            cout << "How many SUITES are occupied in floor #" << i << ": ";
            cin >> suitesOccupied;
        }
        cout << endl << endl;
    }
    cout << endl << endl;

    //output
    cout << "================================================================================================================" << endl
         << setw(50) << "Bluemont Hotel located in " << chainLocation << endl
         << setw(50) << "TODAY'S ROOM RATES (USD/NIGHT)" << endl
         << "================================================================================================================" << endl
         << setw(25) << "Single Room" << setw(25) << "Double Room" << setw(25) << "King Room" << setw(25) << "Suite Room" << endl
         << setw(25) << 
    //finish statements
    cout << endl
         << "Thank you for testing my program!" << endl
         << "PROGRAMMER: Nicholas Nguyen" << endl
         << "CMSC140 Common Project 3" << endl
         << "Due Date: 2023-07-17" << endl;


return 0;

}