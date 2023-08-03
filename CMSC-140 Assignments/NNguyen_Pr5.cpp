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
#include <iomanip> 
#include <cstdio>
using namespace std;

// Global constants 
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

int main(){
       bool temp;
       int magicArrayRow1[COLS], 
           magicArrayRow2[COLS], 
           magicArrayRow3[COLS], 
           size;
       fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, size);
       showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, size);
       temp = isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, size);
       if (temp == false){
              char input;
              cout << endl << "Do you want to try again? (Y/N) ";
              cin >> input;
              while(input == 'y' || input == 'Y'){
                     if (input == 'y' || input == 'Y'){
                            fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, size);
                            showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, size);
                            bool temp = isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, size);
                     } else if (input == 'n' || input == 'N') return 0;
       }
       cout << "Class: CMSC140 CRN 40375" << endl
            << "Assignment: Project 5" << endl
            << "Programmer: Nicholas Nguyen" << endl
            << "Due Date: 08/03/2023";

       }
}
// Function definitions go here
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
       for (int i = 0; i < size; i++){
              cout << "Enter a number for row 0 and column " << i << ": ";
              cin >> arrayRow1[i];
       } for (int i = 0; i < size; i++){
              cout << "Enter a number for row 1 and column " << i << ": ";
              cin >> arrayRow1[i];
       } for (int i = 0; i < size; i++){
              cout << "Enter a number for row 2 and column " << i << ": ";
              cin >> arrayRow1[i];
       }
}

void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
       for (int i = 0; i < size; i++) cout << arrayRow1[i];
              cout << endl;
       for (int i = 0; i < size; i++) cout << arrayRow2[i];
              cout << endl;
       for (int i = 0; i < size; i++) cout << arrayRow3[i];
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
       bool temp;
       for (int i = 0; i < size; i++) 
              temp = (arrayRow1[i] < min || arrayRow1[i] > max || arrayRow2[i] < min || arrayRow2[i] > max || arrayRow3[i] < min || arrayRow3[i] > max);
       return temp;
}

bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
       return (arrayRow1[0] == arrayRow1[1]) || 
              (arrayRow1[0] == arrayRow1[2]) || 
              (arrayRow1[1] == arrayRow1[2]) || 
              (arrayRow2[0] == arrayRow2[1]) || 
              (arrayRow2[0] == arrayRow2[2]) || 
              (arrayRow2[1] == arrayRow2[2]) || 
              (arrayRow3[0] == arrayRow3[1]) || 
              (arrayRow3[0] == arrayRow3[2]) || 
              (arrayRow3[1] == arrayRow3[2]);
}

bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
       int sum1, sum2, sum3;
       for (int i = 0; i < size; i++){
              sum1 += arrayRow1[i];
              sum2 += arrayRow2[i];
              sum3 += arrayRow3[i];
       }
       
       return (sum1 == sum2 || sum2 == sum3 || sum1 == sum3);
}

bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
       int sum1 = arrayRow1[0] + arrayRow2[0] + arrayRow3[0],
           sum2 = arrayRow1[1] + arrayRow2[1] + arrayRow3[1],
           sum3 = arrayRow1[2] + arrayRow2[2] + arrayRow3[2];

       return (sum1 == sum2 || sum1 == sum3 || sum2 == sum3);
}

bool checkDiagSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
       int sum1 = arrayRow1[0] + arrayRow2[1] + arrayRow3[2],
           sum2 = arrayRow1[2] + arrayRow2[1] + arrayRow3[0];

       return sum1 == sum2;
}
