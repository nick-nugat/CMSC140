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
        roomsPerFloor,
        totalRooms,
        occupiedPerType, //total rooms on each floor can't exceed 30 and occupied rooms can't exceed total rooms on that floor
        
        //rooms occupied
        singleRoomsOccupied,
        doubleRoomsOccupied,
        kingRoomsOccupied,
        suitesOccupied,

        totalOccupiedRooms,

        //unoccupied rooms
        unoccupiedRooms,
        
        //income
        priceOfSingle = 0,
        priceOfDouble = 0,
        priceOfKing = 0,
        priceOfSuite = 0,

        leastNumberOfRooms,
        floorNumber;


    float totalIncome, occupancyRate;
    

    cout << "================================================================================================================" << endl
         << setw(50) << "BlueMont Hotel" << endl
         << "================================================================================================================" << endl;
    cout << "Enter the location of this hotel chain: ";
    cin >> chainLocation;
    cout << "Enter the total number of floors of the hotel: ";
    cin >> numberOfFloors;
    cout << endl << endl;

    //checking input for number of floors
    if (numberOfFloors < 1 || numberOfFloors > 5){
        while (numberOfFloors < 1 || numberOfFloors > 5) {
            cout << "The number of floors should be between 1 and 5. Please try again." << endl;
            cout << "Enter the total number of floors of the hotel: ";
            cin >> numberOfFloors;
        }
    } 
    for (int i = 1; i <= numberOfFloors; i++){
        cout << "Enter rooms on floor #" << i << ": ";
        cin >> roomsPerFloor;
        
        if (roomsPerFloor < 1 || roomsPerFloor > 30){
            while (roomsPerFloor < 1 || roomsPerFloor > 30) {
                cout << "Total rooms must be between 1 and 30. Please try again." << endl;
                cout << "Enter rooms on floor #" << i << ": ";
                cin >> roomsPerFloor;
            }
        }


        cout << "How many SINGLE rooms are occupied in floor #" << i << ": ";
        cin >> singleRoomsOccupied;
        cout << "How many DOUBLE rooms are occupied in floor #" << i << ": ";
        cin >> doubleRoomsOccupied;
        cout << "How many KING rooms are occupied in floor #" << i << ": ";
        cin >> kingRoomsOccupied;
        cout << "How many SUITE rooms are occupied in floor #" << i << ": ";
        cin >> suitesOccupied;

        //checking for ocupied rooms exceeding total rooms
        if ((singleRoomsOccupied + doubleRoomsOccupied + kingRoomsOccupied + suitesOccupied) > roomsPerFloor){
            while ((singleRoomsOccupied + doubleRoomsOccupied + kingRoomsOccupied + suitesOccupied) > roomsPerFloor) {
                cout << "The number of occupied rooms exceeds the total number of rooms on this floor. Please try again!" << endl << endl;
                
                cout << "Enter rooms on floor #" << i << ": ";
                cin >> roomsPerFloor;
                if (roomsPerFloor < 1 || roomsPerFloor > 30){
                    while (roomsPerFloor < 1 || roomsPerFloor > 30) {
                        cout << "Total rooms must be between 1 and 30. Please try again." << endl;
                        cout << "Enter rooms on floor #" << i << ": ";
                        cin >> roomsPerFloor;
                    }
                }
                cout << "How many SINGLE rooms are occupied in floor #" << i << ": ";
                cin >> singleRoomsOccupied;
                cout << "How many DOUBLE rooms are occupied in floor #" << i << ": ";
                cin >> doubleRoomsOccupied;
                cout << "How many KING rooms are occupied in floor #" << i << ": ";
                cin >> kingRoomsOccupied;
                cout << "How many SUITES are occupied in floor #" << i << ": ";
                cin >> suitesOccupied;
                cout << endl << endl;
            }
        }
        
        totalRooms += roomsPerFloor;
        
        if (i == 1) {
            leastNumberOfRooms = roomsPerFloor;
            floorNumber = i;
        }
        else if (roomsPerFloor <= leastNumberOfRooms) {
            leastNumberOfRooms = roomsPerFloor;
            floorNumber = i;
        }

        priceOfSingle += (singleRoomsOccupied * 60);
        priceOfDouble += (doubleRoomsOccupied * 75);
        priceOfKing += (kingRoomsOccupied * 100);
        priceOfSuite += (suitesOccupied * 150);
        
        totalOccupiedRooms += singleRoomsOccupied + doubleRoomsOccupied + kingRoomsOccupied + suitesOccupied;
    }


    //output
    cout 
         << "================================================================================================================" << endl
         << setw(50) << "Bluemont Hotel located in " << chainLocation << endl
         << "================================================================================================================" << endl
         << setw(50) << "TODAY'S ROOM RATES (USD/NIGHT)" << endl
         << setw(25) << "Single Room" << setw(25) << "Double Room" << setw(25) << "King Room" << setw(25) << "Suite Room" << endl
         << setw(25) << "60" << setw(25) << "75" << setw(25) << "100" << setw(25) << "150" << endl
         << "================================================================================================================" << endl;


    //calculating values
    totalIncome = (priceOfSingle + priceOfDouble + priceOfKing + priceOfSuite);
    unoccupiedRooms = totalRooms - totalOccupiedRooms;
    occupancyRate = static_cast<float>(totalOccupiedRooms) / static_cast<float>(totalRooms);
    cout
         << setw(30) << "Hotel Income: $" << fixed << setprecision(2) << totalIncome << endl
         << setw(30) << "Total # of rooms: " << totalRooms << endl
         << setw(30) << "Total # of occupied rooms: " << totalOccupiedRooms << endl
         << setw(30) << "Total # of unoccupied rooms: " << unoccupiedRooms << endl
         << setw(30) << "Occupancy rate: " << fixed << setprecision(2) << occupancyRate * 100 << "%" << endl << endl;



    //finish statements
    cout << endl
         << "Floor " << floorNumber << " with " << leastNumberOfRooms << " rooms has the least number of rooms." << endl << endl
         << "Thank you for testing my program!" << endl
         << "PROGRAMMER: Nicholas Nguyen" << endl
         << "CMSC140 Common Project 3" << endl
         << "Due Date: 2023-07-17" << endl;


return 0;

}