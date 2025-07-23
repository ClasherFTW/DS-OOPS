#include <iostream>
using namespace std;

class Interest {
    float principal, rate, time;

public:
    void getData() {
        cout << "Enter Principal, Rate (%), and Time (years): ";
        cin >> principal >> rate >> time;
    }

    void calculate() {
        float si = (principal * rate * time) / 100;
        cout << "Simple Interest = " << si << endl;
    }
};

int main() {
    Interest i;
    i.getData();
    i.calculate();
    return 0;
}
