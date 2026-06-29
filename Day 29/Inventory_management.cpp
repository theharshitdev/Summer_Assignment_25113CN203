#include <iostream>
#include <string>
using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    Product p[100];
    int n = 0, choice, id, i;
    bool found;

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Product ID: ";
            cin >> p[n].id;
            cin.ignore();

            cout << "Enter Product Name: ";
            getline(cin, p[n].name);

            cout << "Enter Quantity: ";
            cin >> p[n].quantity;

            cout << "Enter Price: ";
            cin >> p[n].price;

            n++;
            cout << "Product Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No products available.\n";
            } else {
                cout << "\nID\tName\t\tQuantity\tPrice\n";
                cout << "---------------------------------------------\n";

                for (i = 0; i < n; i++) {
                    cout << p[i].id << "\t"
                         << p[i].name << "\t\t"
                         << p[i].quantity << "\t\t"
                         << p[i].price << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Product ID to Search: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++) {
                if (p[i].id == id) {
                    cout << "\nProduct Found!\n";
                    cout << "ID: " << p[i].id << endl;
                    cout << "Name: " << p[i].name << endl;
                    cout << "Quantity: " << p[i].quantity << endl;
                    cout << "Price: " << p[i].price << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product Not Found!\n";

            break;

        case 4:
            cout << "Enter Product ID: ";
            cin >> id;

            found = false;

            for (i = 0; i < n; i++) {
                if (p[i].id == id) {
                    cout << "Enter New Quantity: ";
                    cin >> p[i].quantity;
                    cout << "Quantity Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product Not Found!\n";

            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}