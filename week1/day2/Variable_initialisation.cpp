#include <iostream>
using namespace std;

int main() {
    int a = 10;        
    int b(20);         
    int c{30};         
    int d;             

    cout << "Copy initialization: " << a << endl;
    cout << "Direct initialization: " << b << endl;
    cout << "Uniform initialization: " << c << endl;
    cout << "Default initialization (uninitialized): " << d << endl;

    return 0;
}
