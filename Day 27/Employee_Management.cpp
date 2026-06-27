#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    float salary;
};

int main() {
    Employee emp[100];
    int n = 0, choice, id;
    bool found;

    do {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> emp[n].id;

            cin.ignore();
            cout << "Enter Employee Name: ";
            getline(cin, emp[n].name);

            cout << "Enter Department: ";
            getline(cin, emp[n].department);

            cout << "Enter Salary: ";
            cin >> emp[n].salary;

            n++;
            cout << "\nEmployee Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "\nNo Employee Records Found.\n";
            } else {
                cout << "\n----- Employee Records -----\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nEmployee " << i + 1 << endl;
                    cout << "ID         : " << emp[i].id << endl;
                    cout << "Name       : " << emp[i].name << endl;
                    cout << "Department : " << emp[i].department << endl;
                    cout << "Salary     : " << emp[i].salary << endl;
                }
            }
            break;

        case 3:
            cout << "\nEnter Employee ID to Search: ";
            cin >> id;
            found = false;

            for (int i = 0; i < n; i++) {
                if (emp[i].id == id) {
                    cout << "\nEmployee Found\n";
                    cout << "ID         : " << emp[i].id << endl;
                    cout << "Name       : " << emp[i].name << endl;
                    cout << "Department : " << emp[i].department << endl;
                    cout << "Salary     : " << emp[i].salary << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nEmployee Not Found.\n";
            break;

        case 4:
            cout << "\nEnter Employee ID to Update: ";
            cin >> id;
            found = false;

            for (int i = 0; i < n; i++) {
                if (emp[i].id == id) {
                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, emp[i].name);

                    cout << "Enter New Department: ";
                    getline(cin, emp[i].department);

                    cout << "Enter New Salary: ";
                    cin >> emp[i].salary;

                    cout << "\nEmployee Record Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nEmployee Not Found.\n";
            break;

        case 5:
            cout << "\nEnter Employee ID to Delete: ";
            cin >> id;
            found = false;

            for (int i = 0; i < n; i++) {
                if (emp[i].id == id) {
                    for (int j = i; j < n - 1; j++) {
                        emp[j] = emp[j + 1];
                    }
                    n--;
                    found = true;
                    cout << "\nEmployee Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "\nEmployee Not Found.\n";
            break;

        case 6:
            cout << "\nThank You! Exiting Program...\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}