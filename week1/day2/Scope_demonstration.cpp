#include <iostream>
using namespace std;

int value = 10;

void functionScope() {
    int value = 20; 
    cout << "Function scope value: " << value << endl;
    {
        int value = 30; 
        cout << "Block scope value: " << value << endl;
    }
    cout << "Function scope value (after block): " << value << endl;
}

int main() {
    cout << "Global scope value: " << value << endl;
    functionScope();
    cout << "Global scope value (after function): " << value << endl;
    return 0;
}
