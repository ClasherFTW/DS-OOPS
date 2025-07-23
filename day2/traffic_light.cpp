#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    char currentLight;
    int timeRemaining;

    cout << "Enter current light (R/G/Y): ";
    cin >> currentLight;
    cout << "Enter remaining time: ";
    cin >> timeRemaining;

    string lightName;
    int nextTime;
    char nextLight;

    
    if (currentLight == 'R' || currentLight == 'r') {
        lightName = "RED";
        nextLight = 'G';
        nextTime = 45;
    } else if (currentLight == 'G' || currentLight == 'g') {
        lightName = "GREEN";
        nextLight = 'Y';
        nextTime = 5;
    } else if (currentLight == 'Y' || currentLight == 'y') {
        lightName = "YELLOW";
        nextLight = 'R';
        nextTime = 30;
    } else {
        cout << "Invalid light color!" << endl;
        return 1;
    }

    cout << "Current: " << lightName << " light" << endl;
    cout << "Countdown: ";
    for (int i = timeRemaining; i >= 0; --i) {
        cout << i << " ";
        this_thread::sleep_for(chrono::seconds(1)); 
    }
    cout << endl;

    
    if (currentLight == 'R' || currentLight == 'r') {
        cout << "GREEN light activated for 45 seconds" << endl;
        cout << "Next: YELLOW light will activate after 45 seconds" << endl;
    } else if (currentLight == 'G' || currentLight == 'g') {
        cout << "YELLOW light activated for 5 seconds" << endl;
        cout << "Next: RED light will activate after 5 seconds" << endl;
    } else {
        cout << "RED light activated for 30 seconds" << endl;
        cout << "Next: GREEN light will activate after 30 seconds" << endl;
    }

    return 0;
}
