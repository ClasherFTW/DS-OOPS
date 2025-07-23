#include <iostream>
using namespace std;

int main() {
    double inputTemp;
    double tempInCelsius, tempInFahrenheit, tempInKelvin;
    char inputUnit;

    cout << "Enter temperature: ";
    cin >> inputTemp;
    cout << "Enter unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> inputUnit;

    if(inputUnit == 'c' || inputUnit == 'C') {
        tempInFahrenheit = (inputTemp * 9.0 / 5.0) + 32.0;
        cout << "Temperature in Fahrenheit: " << tempInFahrenheit << endl;
        tempInKelvin = inputTemp + 273.15;
        cout << "Temperature in Kelvin: " << tempInKelvin << endl;
    } 
    else if(inputUnit == 'f' || inputUnit == 'F') {
        tempInCelsius = (inputTemp - 32.0) * 5.0 / 9.0;
        cout << "Temperature in Celsius: " << tempInCelsius << endl;
        tempInKelvin = tempInCelsius + 273.15;
        cout << "Temperature in Kelvin: " << tempInKelvin << endl;
    } 
    else if(inputUnit == 'k' || inputUnit == 'K') {
        tempInCelsius = inputTemp - 273.15;
        cout << "Temperature in Celsius: " << tempInCelsius << endl;
        tempInFahrenheit = (tempInCelsius * 9.0 / 5.0) + 32.0;
        cout << "Temperature in Fahrenheit: " << tempInFahrenheit << endl;
    } 
    else {
        cout << "Invalid unit entered." << endl;
    }

    return 0;
}