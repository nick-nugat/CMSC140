#include <iostream>
#include <string>
using namespace std;

int main(){
    int weight;
    float height;
    string category;
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Ener your height in meters: ";
    cin >> height;
    if (weight/(height*height) < 18.5) category = "Underweight";
    else if ((weight/(height*height) >= 18.5) && (weight/(height*height) < 25)) category = "Normal weight";
    else if ((weight/(height*height)  >= 25) && (weight/(height*height) < 30)) category = "Overweight";
    else if (weight/(height*height) >= 30) category = "Obesity";  

    cout << "Your BMI category is: " << category;
    return 0;
}