#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SIZE = 4;
    string items[SIZE] = {"Chips", "Soda", "Candy", "Water"};
    double prices[SIZE] = {2.50, 1.75, 1.25, 1.00};
    int choice;
    double moneyInserted, change;
    int quantity;

    do {
        
        cout << "\n===== VENDING MACHINE =====\n";
        for (int i = 0; i < SIZE; i++) {
            cout << i + 1 << ". " << items[i] << " - $" << fixed << setprecision(2) << prices[i] << endl;
        }
        cout << "5. Exit\n";

        cout << "Select item (1-5): ";
        cin >> choice;

        
        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(1000, '\n'); 
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        if (choice >= 1 && choice <= SIZE) {
            int index = choice - 1;
            cout << "Selected: " << items[index] << " ($" << fixed << setprecision(2) << prices[index] << ")\n";

            cout << "Enter quantity: ";
            cin >> quantity;

            if (cin.fail() || quantity <= 0) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid quantity. Returning to menu.\n";
                continue;
            }

            double totalCost = prices[index] * quantity;
            moneyInserted = 0;

            cout << "Total cost: $" << fixed << setprecision(2) << totalCost << endl;

            
            do {
                double amount;
                cout << "Insert money ($): ";
                cin >> amount;

                if (cin.fail() || amount <= 0) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid amount. Try again.\n";
                    continue;
                }

                moneyInserted += amount;

                if (moneyInserted < totalCost) {
                    cout << "Not enough. Please insert at least $"
                         << fixed << setprecision(2) << (totalCost - moneyInserted) << " more.\n";
                }
            } while (moneyInserted < totalCost);

            
            change = moneyInserted - totalCost;
            if (change > 0)
                cout << "Dispensing change: $" << fixed << setprecision(2) << change << endl;

            cout << "Dispensing " << quantity << " x " << items[index] << "...\n";

        } else if (choice == 5) {
            cout << "Exiting... Thank you!\n";
        } else {
            cout << "Invalid selection. Try again.\n";
        }

        cout << "-----------------------------\n";

    } while (choice != 5);

    return 0;
}
