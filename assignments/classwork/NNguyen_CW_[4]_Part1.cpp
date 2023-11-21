/*
 * Class: CMSC140 CRN 40375
 * Instructor: Professor McGowan
 * Project 4
 * Description: (Give a brief description for Project)
 * Due Date: <date>
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Nicholas Nguyen
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    double ticketsSold;
    double totalCost;
    const int ticketPrice = 109;
    const double discount1 = .10; //3-4 days
    const double discount2 = .25; //5-6 days
    const double discount3 = .33; //7-9 days
    const double discount4 = .42; //10+ days
    cout << "Hello, how many tickets were sold? ";
    cin >> ticketsSold;

    if (ticketsSold == 0) cout << "Tickets sold must be greater than zero.";

     else if (ticketsSold >= 1 && ticketsSold <= 2){
        totalCost = ticketPrice * ticketsSold;
        cout << "The total cost of the purchase is $" << fixed << setprecision(2) << totalCost;
    } else if (ticketsSold >= 3 && ticketsSold <= 4){
        double temp = ticketPrice * ticketsSold;
        double discountValue = temp * discount1;
        totalCost = temp - discountValue;
        cout << "The total cost of the purchase is $" << fixed << setprecision(2) << totalCost;
    } else if (ticketsSold >= 5 && ticketsSold <= 6){
        double temp = ticketPrice * ticketsSold;
        double discountValue = temp * discount2;
        totalCost = temp - discountValue;
        cout << "The total cost of the purchase is $" << fixed << setprecision(2) << totalCost;
    } else if (ticketsSold >= 7 && ticketsSold <= 9){
        double temp = ticketPrice * ticketsSold;
        double discountValue = temp * discount3;
        totalCost = temp - discountValue;
        cout << "The total cost of the purchase is $" << fixed << setprecision(2) << totalCost;
    } else if (ticketsSold >= 10){
        double temp = ticketPrice * ticketsSold;
        double discountValue = temp * discount4;
        totalCost = temp - discountValue;
        cout << "The total cost of the purchase is $" << fixed << setprecision(2) << totalCost;
    }



    return 0;
}