#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    int choice;
    cout << "Choose an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

   
    if (choice == 1) {
        cout << "Result: " << a + b << endl;
    } else if (choice == 2) {
        cout << "Result: " << a - b << endl;
    } else if (choice == 3) {
        cout << "Result: " << a * b << endl;
    } else if (choice == 4) {
        
        if (b != 0) {
            
            cout << "Result: " << static_cast<double>(a) / b << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    } else {

        cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
    }

    return 0;
}
