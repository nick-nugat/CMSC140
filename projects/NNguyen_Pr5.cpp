/*
 * Class: CMSC140 CRN 40375
 * Instructor: Professor McGowan
 * Project 5
 * Description: Deals with Lo Shu Magic Squares
 * Due Date: 2023-08-03
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Nicholas Nguyen
*/

#include <iostream>
using namespace std;

// Global constants 
// These are technically not needed but are provided by the template.
const int ROWS = 3;  // The number of rows in the array
const int COLS = 3;  // The number of columns in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number

// Function prototypes
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkDiagSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);

int main() {
    bool temp;
    char input;
    int magicArrayRow1[COLS], 
        magicArrayRow2[COLS], 
        magicArrayRow3[COLS],
        size = COLS;
        
    do {
        fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, size);
        showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, size);
        temp = isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, size);
        
        if (temp) {
            cout << "This is a Lo Shu magic square." << endl << endl;
        } else {
            cout << "This is not a Lo Shu magic square." << endl << endl;
        }
        
        cout << "Do you want to try again? (Y/N) ";
        cin >> input;
        
    } while (input == 'y' || input == 'Y');
    
    cout << endl
         << "Class: CMSC140 CRN 40375" << endl
         << "Assignment: Project 5" << endl
         << "Programmer: Nicholas Nguyen" << endl
         << "Due Date: 08/03/2023";
         
    return 0;
}

// Function definitions go here
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
       for (int i = 0; i < size; i++){
              cout << "Enter a number for row 1 and column " << i + 1 << ": ";
              cin >> arrayRow1[i];
       } for (int i = 0; i < size; i++){
              cout << "Enter a number for row 2 and column " << i + 1 << ": ";
              cin >> arrayRow2[i];
       } for (int i = 0; i < size; i++){
              cout << "Enter a number for row 3 and column " << i + 1 << ": ";
              cin >> arrayRow3[i];
       }
}

void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
       for (int i = 0; i < size; i++) cout << arrayRow1[i] << " ";
              cout << endl;
       for (int i = 0; i < size; i++) cout << arrayRow2[i] << " ";
              cout << endl;
       for (int i = 0; i < size; i++) cout << arrayRow3[i] << " ";
              cout << endl;

}
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
       return ((checkRange(arrayRow1, arrayRow2, arrayRow3, size, MIN, MAX)) && 
               (checkUnique(arrayRow1, arrayRow2, arrayRow3, size)) &&
               (checkRowSum(arrayRow1, arrayRow2, arrayRow3, size)) &&
               (checkColSum(arrayRow1, arrayRow2, arrayRow3, size)) &&
               (checkDiagSum(arrayRow1, arrayRow2, arrayRow3, size)));
}
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max){

       for (int i = 0; i < size; i++){
              if (arrayRow1[i] < min || arrayRow1[i] > max ||
                     arrayRow2[i] < min || arrayRow2[i] > max || 
                     arrayRow3[i] < min || arrayRow3[i] > max) return false;
       }
       return true;
       

}

bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {
    bool unique[9] = { false, false, false, 
                       false, false, false, 
                       false, false, false };

    for (int i = 0; i < size; i++) {
        if (unique[arrayRow1[i]-1]) return false;
        else unique[arrayRow1[i]-1] = true;
        
        if (unique[arrayRow2[i]-1]) return false;
        else unique[arrayRow2[i]-1] = true;
        
        if (unique[arrayRow3[i]-1]) return false;
        else unique[arrayRow3[i]-1] = true;
    }
    return true;
}

bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
       int sum1 = 0, sum2 = 0, sum3 = 0;
       for (int i = 0; i < size; i++){
              sum1 += arrayRow1[i];
              sum2 += arrayRow2[i];
              sum3 += arrayRow3[i];
       }
       
       return (sum1 == sum2 && sum2 == sum3 && sum1 == sum3);
}

bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
       int sum1 = arrayRow1[0] + arrayRow2[0] + arrayRow3[0],
           sum2 = arrayRow1[1] + arrayRow2[1] + arrayRow3[1],
           sum3 = arrayRow1[2] + arrayRow2[2] + arrayRow3[2];

       return (sum1 == sum2 && sum1 == sum3 && sum2 == sum3);
}

bool checkDiagSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
       int sum1 = arrayRow1[0] + arrayRow2[1] + arrayRow3[2],
           sum2 = arrayRow1[2] + arrayRow2[1] + arrayRow3[0];

       return sum1 == sum2;
}
 