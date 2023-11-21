/*
 * Class: CMSC140 CRN 40375
 * Instructor: Professor McGowan
 * Classwork 7
 * Description: Finds the numbers larger than variable n in an array of numbers
 * Due Date: 2023-07-31
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Nicholas Nguyen
*/

#include <iostream>
using namespace std;

void largerThanN(int[], int, int);
int main(){
    int n, arraySize;
    int numbers[10] = {30, 20, 50, 2, -1, 44, 3, 12, 90, 32};
    cout << "Enter a number: ";
    cin >> n;
    cout << "The numbers that are larger than " << n << " are: ";
    arraySize = sizeof(numbers)/sizeof(int);
    largerThanN(numbers, arraySize, n);
}

void largerThanN(int numbers[], int arraySize, int n){
    for (int i = 0; i < arraySize; i++){
        if (numbers[i] > n)
            cout << numbers[i] << " ";
    }
}