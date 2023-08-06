/*
 * Class: CMSC140 CRN 40375
 * Instructor: Professor McGowan
 * Classwork 8
 * Description: Returns an inputted array of numbers
 * Due Date: 2023-08-07
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Nicholas Nguyen
*/

#include <iostream>
using namespace std;

void displayArray(int array[], int size); // -  Displays the content of the array 
void selectionSort(int array[], int size); // - sorts the array using the selection sort algorithm in descending order.  Hint: refer to example 8-5 in the textbook.
int findMax(int array[], int size); // -  finds and returns the highest element of the array
int findMin(int array[], int size); // -  finds and returns the lowest element of the array
double findAvg(int array[], int size); // - finds and returns the average of the elements of the array

int main(){
    int size;
    cout << "How many scores do you want to enter? ";
    cin >> size;
    int min,
        max, 
        array[size];
    for (int i = 0; i < size; i++){
        int input;
        cout << "Enter score #" << i + 1 << ": ";
        cin >> input;
        array[i] = input;
    }
    cout << "Original order scores are: ";
    displayArray(array, size);
    cout << endl << endl;
    cout << "Scores sorted high to low: ";
    selectionSort(array, size);
    max = findMax(array, size);
    min = findMin(array, size);
    double avg = findAvg(array, size);
    cout << endl << endl
         << "Highest value: " << max << endl << endl
         << "Lowest value: " << min << endl << endl
         << "Average of scores: " << avg;

}

void displayArray(int array[], int size){
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}

int findMax(int array[], int size){
    int max = 0;
    for (int i = 0; i < size; i++){
        if (array[i] > max) max = array[i];
    }
    return max;
}

int findMin(int array[], int size){
    int min = array[0];
    for (int i = 0; i < size; i++){
        if (array[i] < min) min = array[i];
    }
    return min;
}

double findAvg(int array[], int size){
    double sum;
    for (int i = 0; i < size; i++)
        sum += array[i];

    return sum / size;
}

void selectionSort(int array[], int size){
    int maxValue, 
        maxIndex, 
        sortedArray[size];

    for (int i = 0; i < size - 1; i++){
        maxIndex = i;
        maxValue = array[i];
        for(int j = i + 1; j < size; j++){
            if (array[j] > maxValue){
                maxValue = array[j];
                maxIndex = j;
            }
        }
        swap(array[maxIndex], array[i]);
    }
    displayArray(array, size);
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}