#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    
    if(num % 2 == 0){
        cout << num << " is even." << endl;
    }
    else{
        cout << num << " is odd." << endl;
    }

    
    if(num > 0){
        cout << num << " is positive." << endl;
    }
    else if(num < 0){
        cout << num << " is negative." << endl;
    }
    else {
        cout << num << " is zero." << endl;
    }


    if(num % 5 == 0){
        cout << num << " is divisible by 5." << endl;
    }
    else if(num % 3 == 0){
        cout << num << " is divisible by 3." << endl;
    }
    else {
        cout << num << " is not divisible by 3 or 5." << endl;
    }

    
    if(num >= -9 && num <= 9){
        cout << num << " is a single-digit number." << endl;
    }
    else {
        cout << num << " is not a single-digit number." << endl;
    }

    return 0;
}