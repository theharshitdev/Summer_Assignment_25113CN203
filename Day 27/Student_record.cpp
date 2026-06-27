#include <iostream>
#include <string>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s[100];
    int n = 0;
    int choice, roll;
    bool found;

    do {
        cout << "\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Student Record\n";
        cout << "4. Update Student Record\n";
        cout << "5. Delete Student Record\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> s[n].roll;

            cin.ignore();
            cout << "Enter Student Name: ";
            getline(cin, s[n].name);

            cout << "Enter Marks: ";
            cin >> s[n].marks;

            n++;
            cout << "\nStudent Record Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "\nNo Student Records Found.\n";
            } else {
                cout << "\n----- Student Records -----\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nStudent " << i + 1 << endl;
                    cout << "Roll Number : " << s[i].roll << endl;
                    cout << "Name        : " << s[i].name << endl;
                    cout << "Marks       : " << s[i].marks << endl;
                }
            }
            break;

        case 3:
            cout << "\nEnter Roll Number to Search: ";
            cin >> roll;
            found = false;

            for (int i = 0; i < n; i++) {
                if (s[i].roll == roll) {
                    cout << "\nStudent Found\n";
                    cout << "Roll Number : " << s[i].roll << endl;
                    cout << "Name        : " << s[i].name << endl;
                    cout << "Marks       : " << s[i].marks << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nStudent Record Not Found.\n";
            break;

        case 4:
            cout << "\nEnter Roll Number to Update: ";
            cin >> roll;
            found = false;

            for (int i = 0; i < n; i++) {
                if (s[i].roll == roll) {
                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, s[i].name);

                    cout << "Enter New Marks: ";
                    cin >> s[i].marks;

                    cout << "\nStudent Record Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nStudent Record Not Found.\n";
            break;

        case 5:
            cout << "\nEnter Roll Number to Delete: ";
            cin >> roll;
            found = false;

            for (int i = 0; i < n; i++) {
                if (s[i].roll == roll) {
                    for (int j = i; j < n - 1; j++) {
                        s[j] = s[j + 1];
                    }
                    n--;
                    found = true;
                    cout << "\nStudent Record Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "\nStudent Record Not Found.\n";
            break;

        case 6:
            cout << "\nThank You! Program Exited Successfully.\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}