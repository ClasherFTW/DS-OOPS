#include <iostream>
using namespace std;

class Number {
    int num;

public:
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void checkProperties() {
        cout << (num % 2 == 0 ? "Even" : "Odd") << endl;
        cout << (num > 0 ? "Positive" : (num < 0 ? "Negative" : "Zero")) << endl;
        if (num >= -9 && num <= 9) cout << "Single-digit" << endl;
        else if ((num >= -99 && num <= -10) || (num >= 10 && num <= 99)) cout << "Double-digit" << endl;
        else cout << "More than two digits" << endl;
    }
};

int main() {
    Number n;
    n.input();
    n.checkProperties();
    return 0;
}
