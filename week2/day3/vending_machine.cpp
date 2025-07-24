#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SIZE = 4;
    string items[SIZE] = {"Chips", "Soda", "Candy", "Water"};
    double prices[SIZE] = {2.50, 1.75, 1.25, 1.00};

    int choice, quantity;
    double price, total, money, change;

    do {
        
        cout << "\n===== VENDING MACHINE =====\n";
        for (int i = 0; i < SIZE; i++) {
            cout << i + 1 << ". " << items[i] << " - $" << fixed << setprecision(2) << prices[i] << endl;
        }
        cout << "5. Exit\n";
        cout << "Please choose an item (1-5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Thank you for using the vending machine!\n";
            break;
        }

        if (choice >= 1 && choice <= SIZE) {
            
            int index = choice - 1;
            price = prices[index];
            string itemName = items[index];

            cout << "You selected: " << itemName << " ($" << fixed << setprecision(2) << price << ")\n";
            cout << "Enter quantity: ";
            cin >> quantity;

            
            total = price * quantity;
            cout << "Total cost: $" << fixed << setprecision(2) << total << endl;

            
            money = 0;
            do {
                double insert;
                cout << "Insert money: $";
                cin >> insert;

                if (insert > 0) {
                    money += insert;

                    if (money < total) {
                        cout << "Not enough. Insert $" << fixed << setprecision(2)
                             << (total - money) << " more.\n";
                    }

                } else {
                    cout << "Please insert a valid amount.\n";
                }

            } while (money < total);

            
            if (money >= total) {
                change = money - total;
                cout << "Dispensing " << quantity << " x " << itemName << endl;

                if (change > 0) {
                    cout << "Returning change: $" << fixed << setprecision(2) << change << endl;
                }

                cout << "Enjoy your " << itemName << "!\n";
            }

        } else {
            cout << "Invalid selection. Please try again.\n";
        }

        cout << "------------------------------\n";

    } while (true);

    return 0;
}
