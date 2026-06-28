#include <iostream>
#include <string>
using namespace std;

class ContactManager {
private:
    string name[100];
    string phone[100];
    string email[100];
    int count = 0;

public:
    // Add Contact
    void addContact() {
        if (count == 100) {
            cout << "Contact List is Full!\n";
            return;
        }

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name[count]);

        cout << "Enter Phone Number: ";
        getline(cin, phone[count]);

        cout << "Enter Email: ";
        getline(cin, email[count]);

        count++;
        cout << "\nContact Added Successfully!\n";
    }

    // Display Contacts
    void displayContacts() {
        if (count == 0) {
            cout << "\nNo Contacts Available!\n";
            return;
        }

        cout << "\n===== Contact List =====\n";
        for (int i = 0; i < count; i++) {
            cout << "\nContact " << i + 1 << endl;
            cout << "Name  : " << name[i] << endl;
            cout << "Phone : " << phone[i] << endl;
            cout << "Email : " << email[i] << endl;
        }
    }

    // Search Contact
    void searchContact() {
        cin.ignore();
        string searchName;
        cout << "Enter Name to Search: ";
        getline(cin, searchName);

        for (int i = 0; i < count; i++) {
            if (name[i] == searchName) {
                cout << "\nContact Found!\n";
                cout << "Name  : " << name[i] << endl;
                cout << "Phone : " << phone[i] << endl;
                cout << "Email : " << email[i] << endl;
                return;
            }
        }

        cout << "\nContact Not Found!\n";
    }

    // Delete Contact
    void deleteContact() {
        cin.ignore();
        string deleteName;
        cout << "Enter Name to Delete: ";
        getline(cin, deleteName);

        for (int i = 0; i < count; i++) {
            if (name[i] == deleteName) {
                for (int j = i; j < count - 1; j++) {
                    name[j] = name[j + 1];
                    phone[j] = phone[j + 1];
                    email[j] = email[j + 1];
                }
                count--;
                cout << "\nContact Deleted Successfully!\n";
                return;
            }
        }

        cout << "\nContact Not Found!\n";
    }
};

int main() {
    ContactManager cm;
    int choice;

    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cm.addContact();
                break;
            case 2:
                cm.displayContacts();
                break;
            case 3:
                cm.searchContact();
                break;
            case 4:
                cm.deleteContact();
                break;
            case 5:
                cout << "\nThank You for Using Contact Management System!\n";
                break;
            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}