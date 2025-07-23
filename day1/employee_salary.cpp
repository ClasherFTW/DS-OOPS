#include<iostream>
#include<string>    
using namespace std;
int main(){
    int id,salary;
    string name;    
    int exp;
    int bonus = 0;
    cout << "Enter Employee ID: ";
    cin >> id;  
    cout << "Enter Employee Name: ";
    cin.ignore(); 
    getline(cin, name);
    cout << "Enter Employee Salary: ";
    cin >> salary;  
    cout << "Enter Employee Experience (in years): ";
    cin >> exp; 
    if(exp<2 ) {
        bonus = salary * 0.05; 
    } else if(exp >= 2 && exp < 5) {
        bonus = salary * 0.1; 
    } else (exp >= 5 ); {
        bonus = salary * 0.15;
    } 
    cout << "salary is " << salary + bonus << endl;
    return 0;

}
