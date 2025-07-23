#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    int upper = 0, lower = 0, digit = 0, special = 0, i = 0;
    while (i < password.length()) {
        if (isupper(password[i])) upper++;
        else if (islower(password[i])) lower++;
        else if (isdigit(password[i])) digit++;
        else special++;
        i++;
    }

    int categories = 0;
    if (upper > 0) categories++;
    if (lower > 0) categories++;
    if (digit > 0) categories++;
    if (special > 0) categories++;

    string strength;
    if (password.length() < 6 || categories < 2) strength = "Weak";
    else if (password.length() >= 6 && password.length() <= 8 && categories >= 3) strength = "Medium";
    else if (password.length() >= 9 && categories == 4) strength = "Strong";
    else strength = "Weak"; 

    cout << "Analysis:\n";
    cout << "Uppercase: " << upper << "\n";
    cout << "Lowercase: " << lower << "\n";
    cout << "Digits: " << digit << "\n";
    cout << "Special characters: " << special << "\n";
    cout << "Password strength: " << strength << endl;
    return 0;
}

