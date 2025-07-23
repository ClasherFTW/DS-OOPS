#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main() {
    cout << "Size of int: " << sizeof(int) << " bytes\n";
    cout << "Size of short: " << sizeof(short) << " bytes\n";
    cout << "Size of long: " << sizeof(long) << " bytes\n";
    cout << "Size of float: " << sizeof(float) << " bytes\n";
    cout << "Size of double: " << sizeof(double) << " bytes\n";
    cout << "Size of char: " << sizeof(char) << " bytes\n";
    cout << "Size of bool: " << sizeof(bool) << " bytes\n";

    cout << "Signed int range: " << INT_MIN << " to " << INT_MAX << endl;
    cout << "Unsigned int max: " << UINT_MAX << endl;

    float f = 3.14;
    int i = (int)f;
    cout << "Float value: " << f << endl;
    cout << "After typecasting to int: " << i << endl;
    return 0;


    return 0;
}
