#include <iostream>
#include <iomanip>
#include <string>
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

int main()
{
 
 /* Define a Lo Shu Magic Square using 3 parallel arrays corresponding to each row of the grid */
 int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];
      

 return 0;
}
// Function definitions go here
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
       for (int i = 0; i < 3; i++){
              cout << "Enter a number for row 0 and column " << i << ": ";
              cin >> arrayRow1[i];
       } for (int i = 0; i < 3; i++){
              cout << "Enter a number for row 1 and column " << i << ": ";
              cin >> arrayRow1[i];
       } for (int i = 0; i < 3; i++){
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
       // call other checking functions later in if statements
}
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max){
       for (int i = 0; i < size; i++){
              if (arrayRow1[i] < min || arrayRow1[i] > max) return false;
       }
}
       


