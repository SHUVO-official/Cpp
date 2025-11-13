//This code calculates the value of kelvin by given fareheight.
#include <iostream>
using namespace std;

int main() {
    float fahrenheit, kelvin;
    
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    
            // সঠিক ফর্মুলা: (F - 32) × 5/9 + 273.15
    kelvin = (fahrenheit - 32) * 5.0/9.0 + 273.15;
    
    cout << "Temperature in Kelvin: " << kelvin;
    return 0;
}