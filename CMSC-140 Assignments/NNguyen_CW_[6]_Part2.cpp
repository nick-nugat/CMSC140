/*
 * Class: CMSC140 CRN 40375
 * Instructor: Professor McGowan
 * Classwork 6 - Part 2
 * Description: 
 * Due Date: 2023-07-24
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Nicholas Nguyen
*/

#include <iostream>
using namespace std;

int showMenu();
double takePurchase();
void displayInfo(double, double);
double takePayment();

int main(){
    int choice;
    double purchase, payment;

    purchase = takePurchase();
    payment = takePayment();
    displayInfo(purchase, payment);
}


int showMenu(){
    int choice;

    //prices
    double coke = 1.25,
           pepsi = 1.00,
           water = 2.00,
           coffee =  1.50;
    double price;

    cout << "1. Coke \t$1.25" << endl
         << "2. Pepsi \t$1.00" << endl
         << "3. Water \t$2.00" << endl
         << "4. Coffee \t$1.50" << endl
         << "5. Exit Menu" << endl << endl;

    cout << "Enter your choice: ";
    cin >> choice;
    
    switch(choice){
        case 1:
            price = coke;
            return price;
            break;
        case 2:
            price = pepsi;
            return price;
            break;
        case 3:
            price = water;
            return price;
            break;
        case 4:
            price = coffee;
            return price;
            break;
        case 5:
            cout << "Menu exited.";
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 5: ";
            cin >> choice;
            break;
    }
    return price;
}

double takePurchase(){
    double price = showMenu();
    int quantity;
    cout << "How many do you want? ";
    cin >> quantity;
    return (price * quantity);
}


double takePayment(){
    double payment;
    cout << "Please enter your payment here: ";
    cin >> payment;
    return payment;
}

void displayInfo(double purchase, double payment){
    double tax = purchase * 0.06,
           totalPurchase = purchase + tax,
           change = payment - totalPurchase;

    cout << "Tax amount: $" << tax << endl
         << "Total purchase: $" << totalPurchase << endl
         << "Change amount: $" << change;
}
