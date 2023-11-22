/*
 * Class: CMSC140 CRN 40375
 * Instructor: Professor McGowan
 * Project 4
 * Description: 
 * Due Date: 2023-07-24
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Nicholas Nguyen
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

ofstream employeeAbsences;
int getNumOfEmployees();
int getTotalDaysAbsent(int);
double calculateAvgDaysAbsent(int, int);

int main(){
    int employees, totalDaysMissed;
    double avgDaysAbsent;
    cout << "Calculate the average numbers of days a company's employees have been absent." << endl << endl;
    employees = getNumOfEmployees();
    totalDaysMissed = getTotalDaysAbsent(employees);
    avgDaysAbsent = calculateAvgDaysAbsent(employees, totalDaysMissed);
    employeeAbsences << endl
                     << "The average number of days absent is " 
                     << avgDaysAbsent
                     << endl << endl
                     << "Class: CMSC140 CRN 40375" << endl
                     << "Assignment: Project 4" << endl
                     << "Programmer: Nicholas Nguyen" << endl
                     << "Due Date: 07/24/2023";
    employeeAbsences.close();
}


int getNumOfEmployees(){
    int employees;
    cout << "How many employees are in the company? ";
    cin >> employees;
    return employees;
}

int getTotalDaysAbsent(int employees){
    int totalDaysMissed = 0;
    employeeAbsences.open("employeeAbsences.txt");
    employeeAbsences << "EMPLOYEE ABSENCE REPORT" << endl;
    for (int i = 0; i < employees; i++){
        int employeeID, daysMissed;
        cout << "Enter the employee ID: ";
        cin >> employeeID;
        cout << "Enter the days the employee missed: ";
        cin >> daysMissed;
        if (daysMissed < 0){
            cout << "The number of days must not be negative." << endl
                 << "Please re-enter the number of days this employee was absent: ";
            cin >> daysMissed;
        }
        employeeAbsences << setw(5) << employeeID << setw(15) << daysMissed << endl;
        totalDaysMissed += daysMissed;
    }

    employeeAbsences << endl << endl
                     << "The " << employees << " employees were absent a total of " 
                     << totalDaysMissed << " days.";
    return totalDaysMissed;
}

double calculateAvgDaysAbsent(int employees, int totalDaysMissed){
    return static_cast<double>(totalDaysMissed) / employees;
}