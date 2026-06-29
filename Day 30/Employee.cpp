#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    int empID[MAX];
    string empName[MAX], department[MAX];
    float salary[MAX];

    int n = 0, choice, id;
    bool found;

    do {
        cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Salary\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> empID[n];
            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, empName[n]);

            cout << "Enter Department: ";
            getline(cin, department[n]);

            cout << "Enter Salary: ";
            cin >> salary[n];

            n++;
            cout << "Employee Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No Employee Records Found!\n";
            } else {
                cout << "\nID\tName\t\tDepartment\tSalary\n";
                cout << "----------------------------------------------------------\n";

                for (int i = 0; i < n; i++) {
                    cout << empID[i] << "\t"
                         << empName[i] << "\t\t"
                         << department[i] << "\t\t"
                         << salary[i] << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Employee ID to Search: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (empID[i] == id) {
                    cout << "\nEmployee Found!\n";
                    cout << "ID         : " << empID[i] << endl;
                    cout << "Name       : " << empName[i] << endl;
                    cout << "Department : " << department[i] << endl;
                    cout << "Salary     : " << salary[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;

        case 4:
            cout << "Enter Employee ID to Update Salary: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (empID[i] == id) {
                    cout << "Enter New Salary: ";
                    cin >> salary[i];
                    cout << "Salary Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;

        case 5:
            cout << "Enter Employee ID to Delete: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (empID[i] == id) {
                    for (int j = i; j < n - 1; j++) {
                        empID[j] = empID[j + 1];
                        empName[j] = empName[j + 1];
                        department[j] = department[j + 1];
                        salary[j] = salary[j + 1];
                    }
                    n--;
                    cout << "Employee Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;

        case 6:
            cout << "Thank You for Using Employee Management System!\n";
            break;

        default:
            cout << "Invalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}