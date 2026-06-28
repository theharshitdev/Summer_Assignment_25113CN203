#include <iostream>
#include <string>
using namespace std;

class Library {
    int bookId[100], count = 0;
    string title[100], author[100];
    bool issued[100];

public:
    void addBook() {
        cout << "Enter Book ID: ";
        cin >> bookId[count];
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title[count]);

        cout << "Enter Author Name: ";
        getline(cin, author[count]);

        issued[count] = false;
        count++;

        cout << "Book Added Successfully!\n";
    }

    void displayBooks() {
        if (count == 0) {
            cout << "No books available.\n";
            return;
        }

        cout << "\nBook List\n";
        for (int i = 0; i < count; i++) {
            cout << "\nBook ID: " << bookId[i];
            cout << "\nTitle: " << title[i];
            cout << "\nAuthor: " << author[i];
            cout << "\nStatus: " << (issued[i] ? "Issued" : "Available") << "\n";
        }
    }

    void searchBook() {
        int id;
        cout << "Enter Book ID to search: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (bookId[i] == id) {
                cout << "\nBook Found";
                cout << "\nTitle: " << title[i];
                cout << "\nAuthor: " << author[i];
                cout << "\nStatus: " << (issued[i] ? "Issued" : "Available") << "\n";
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void issueBook() {
        int id;
        cout << "Enter Book ID to issue: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (bookId[i] == id) {
                if (!issued[i]) {
                    issued[i] = true;
                    cout << "Book Issued Successfully.\n";
                } else {
                    cout << "Book is already issued.\n";
                }
                return;
            }
        }
        cout << "Book not found.\n";
    }

    void returnBook() {
        int id;
        cout << "Enter Book ID to return: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (bookId[i] == id) {
                if (issued[i]) {
                    issued[i] = false;
                    cout << "Book Returned Successfully.\n";
                } else {
                    cout << "Book was not issued.\n";
                }
                return;
            }
        }
        cout << "Book not found.\n";
    }
};

int main() {
    Library lib;
    int choice;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: lib.addBook(); break;
            case 2: lib.displayBooks(); break;
            case 3: lib.searchBook(); break;
            case 4: lib.issueBook(); break;
            case 5: lib.returnBook(); break;
            case 6: cout << "Thank you!\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}