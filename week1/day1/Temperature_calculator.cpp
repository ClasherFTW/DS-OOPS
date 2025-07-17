#include <iostream>
using namespace std;

class Temperature {
public:
    void convert(float celsius) {
        float fahrenheit = (celsius * 9/5) + 32;
        float kelvin = celsius + 273.15;
        cout << "Fahrenheit: " << fahrenheit << ", Kelvin: " << kelvin << endl;
    }

    void convertF(float fahrenheit) {
        float celsius = (fahrenheit - 32) * 5/9;
        float kelvin = celsius + 273.15;
        cout << "Celsius: " << celsius << ", Kelvin: " << kelvin << endl;
    }
};

int main() {
    Temperature t;
    float temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    t.convert(temp);

    cout << "Enter temperature in Fahrenheit: ";
    cin >> temp;
    t.convertF(temp);

    return 0;
}
