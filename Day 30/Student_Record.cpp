#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    int roll[MAX], marks[MAX];
    string name[MAX];
    int n = 0, choice, r;
    bool found;

    do {
        cout << "\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student Marks\n";
        cout << "5. Delete Student Record\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> roll[n];
            cin.ignore();

            cout << "Enter Student Name: ";
            getline(cin, name[n]);

            cout << "Enter Marks: ";
            cin >> marks[n];

            n++;
            cout << "Student Record Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No Student Records Found!\n";
            } else {
                cout << "\nRoll\tName\t\tMarks\n";
                cout << "----------------------------------------\n";
                for (int i = 0; i < n; i++) {
                    cout << roll[i] << "\t"
                         << name[i] << "\t\t"
                         << marks[i] << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Roll Number to Search: ";
            cin >> r;

            found = false;
            for (int i = 0; i < n; i++) {
                if (roll[i] == r) {
                    cout << "\nStudent Found!\n";
                    cout << "Roll No : " << roll[i] << endl;
                    cout << "Name    : " << name[i] << endl;
                    cout << "Marks   : " << marks[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student Record Not Found!\n";
            break;

        case 4:
            cout << "Enter Roll Number to Update: ";
            cin >> r;

            found = false;
            for (int i = 0; i < n; i++) {
                if (roll[i] == r) {
                    cout << "Enter New Marks: ";
                    cin >> marks[i];
                    cout << "Marks Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student Record Not Found!\n";
            break;

        case 5:
            cout << "Enter Roll Number to Delete: ";
            cin >> r;

            found = false;
            for (int i = 0; i < n; i++) {
                if (roll[i] == r) {
                    for (int j = i; j < n - 1; j++) {
                        roll[j] = roll[j + 1];
                        name[j] = name[j + 1];
                        marks[j] = marks[j + 1];
                    }
                    n--;
                    cout << "Student Record Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student Record Not Found!\n";
            break;

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}