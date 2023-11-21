#include <iostream>
#include <string>
using namespace std;

int main(){
    string fullName;
    float order1, order2, order3, subtotal, average, total;
    const float TAX = 0.06;
    cout << "Type your full name below: ";
    getline(cin, fullName);
    cout <<  "Enter the price of each item of the order separated by a space:\n"; 
    cin >> order1 >> order2 >> order3;
    subtotal = order1 + order2 + order3;
    average = subtotal/3;
    total = subtotal*TAX;

    cout << "The subtotal, tax, and total bill respectively are " << subtotal << ", " << TAX << ", and " << total << endl; 
    cout << "The average price not including tax is " << average; 
    return 0;

}