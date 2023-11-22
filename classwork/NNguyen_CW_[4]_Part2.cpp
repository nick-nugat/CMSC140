/*
 * Class: CMSC140 CRN 40375
 * Instructor: Professor McGowan
 * Classwork 4 - Part 2
 * Description: Determines the price for a custom shop sign
 * Due Date: 2023-07-05
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Nicholas Nguyen
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int numColors;
  char input, input2;
  float newPrice, temp, temp2;
  const int BASE_1 = 250; //1
  const int BASE_2 = 325; //2
  const int BASE_3 = 450; //3
  const int BASE_4 = 625; //4
  const int BASE_5 = 850; //5 or more
  float lightedSigns = .25;
  float signRemoval = .10;

  cout << "Enter the number of colors in the sign: ";
  cin >> numColors;

  switch (numColors){

    case 0: cout << "Invalid number of colors; the number must be greater than zero.";
      break;    
    
    case 1: 
      cout << "Do you want a lighted sign? (Y/N) ";
      cin >> input; 
      if (input == 'Y' || input == 'y'){
        temp = BASE_1 * lightedSigns;
        newPrice = BASE_1 + temp;
      }
      else if (input == 'N' || input == 'n') newPrice = BASE_1;

      cout << "Do you need an old sign removed? (Y/N) ";
      cin >> input2;
      if (input2 == 'Y' || input2 == 'y'){ 
        temp2 = BASE_1 * signRemoval;
        newPrice = newPrice + temp2;
      }
      else if (input2 == 'N' || input2 == 'n') break;
      break;

    case 2: 
      cout << "Do you want a lighted sign? (Y/N) ";
      cin >> input; 
      if (input == 'Y' || input == 'y'){
        temp = BASE_2 * lightedSigns;
        newPrice = BASE_2 + temp;
      }
      else if (input == 'N' || input == 'n') newPrice = BASE_2;
      
      cout << "Do you need an old sign removed? (Y/N) ";
      cin >> input2;
      if (input2 == 'Y' || input2 == 'y'){ 
        temp2 = BASE_2 * signRemoval;
        newPrice = newPrice + temp2;
      }
      else if (input2 == 'N' || input2 == 'n') break;
      break;

    case 3: 
      cout << "Do you want a lighted sign? (Y/N) ";
      cin >> input; 
      if (input == 'Y' || input == 'y'){
        temp = BASE_3 * lightedSigns;
        newPrice = BASE_3 + temp;
      }
      else if (input == 'N' || input == 'n') newPrice = BASE_3;
      
      cout << "Do you need an old sign removed? (Y/N) ";
      cin >> input2;
      if (input2 == 'Y' || input2 == 'y'){ 
        temp2 = BASE_3 * signRemoval;
        newPrice = newPrice + temp2;
      }
      else if (input2 == 'N' || input2 == 'n') break;
      break;
      
    case 4:
      cout << "Do you want a lighted sign? (Y/N) ";
      cin >> input;  
      if (input == 'Y' || input == 'y'){
        temp = BASE_4 * lightedSigns;
        newPrice = BASE_4 + temp;
      }
      else if (input == 'N' || input == 'n') newPrice = BASE_4;
      
      cout << "Do you need an old sign removed? (Y/N) ";
      cin >> input2;
      if (input2 == 'Y' || input2 == 'y'){ 
        temp2 = BASE_4 * signRemoval;
        newPrice = newPrice + temp2;
      }
      else if (input2 == 'N' || input2 == 'n') break;
      break;

    case 5: default: 
      cout << "Do you want a lighted sign? (Y/N) ";
      cin >> input; 
      if (input == 'Y' || input == 'y'){
        temp = BASE_5 * lightedSigns;
        newPrice = BASE_5 + temp;
      }
      else if (input == 'N' || input == 'n') newPrice = BASE_5;
      
      cout << "Do you need an old sign removed? (Y/N) ";
      cin >> input2;
      if (input2 == 'Y' || input2 == 'y'){ 
        temp2 = BASE_5 * signRemoval;
        newPrice = newPrice + temp2;
      }
      else if (input2 == 'N' || input2 == 'n') break;
  }

  if (numColors > 0) cout << endl << "The new price is: $" << fixed << setprecision(2) << newPrice;
  return 0;
}