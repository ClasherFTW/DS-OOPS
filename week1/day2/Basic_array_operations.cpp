#include <iostream>
using namespace std;

int main() {

    int nums[5];
    float marks[3] = {88.5, 76.0, 91.2};
    char grades[4] = {'A', 'B', 'C', 'D'};

    for (int i = 0; i < 5; i++) {
        nums[i] = (i + 1) * 10; 
    }

    nums[2] = 100;
    cout << "nums array: ";
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    float sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += marks[i];
    }
    float average = sum / 3;
    cout << "Sum of marks: " << sum << endl;
    cout << "Average marks: " << average << endl;
    return 0;
}
