#include <iostream>
using namespace std;


double totalBankBalance = 50000;


void depositMoney(double& accountBalance, double amount);
void withdrawMoney(double& accountBalance, double amount);
void displayBalances(double accountBalance);

int main() {
    double accountBalance = 1000; 

    cout << "Initial Account Balance: " << accountBalance << endl;
    cout << "Initial Bank Balance: " << totalBankBalance << endl;

    
    depositMoney(accountBalance, 1500);      
    withdrawMoney(accountBalance, 500);      
    withdrawMoney(accountBalance, 3000);     
    depositMoney(accountBalance, 1800);      

    displayBalances(accountBalance);

    return 0;
}


void depositMoney(double& accountBalance, double amount) {
    static int depositCount = 0;
    accountBalance += amount;
    totalBankBalance += amount;
    depositCount++;
    cout << "Deposited: " << amount << ". Transaction #" << depositCount << endl;
}


void withdrawMoney(double& accountBalance, double amount) {
    static int withdrawCount = 0;
    if (accountBalance >= amount) {
        accountBalance -= amount;
        totalBankBalance -= amount;
        withdrawCount++;
        cout << "Withdrew: " << amount << ". Transaction #" << withdrawCount << endl;
    } else {
        cout << "Withdrawal of " << amount << " failed: Insufficient account balance." << endl;
    }
}


void displayBalances(double accountBalance) {
    cout << "--- Current Balances ---" << endl;
    cout << "Account Balance: " << accountBalance << endl;
    cout << "Total Bank Balance: " << totalBankBalance << endl;
}

