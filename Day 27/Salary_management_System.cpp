#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int empId;
    string name;
    float basicSalary, hra, da, grossSalary;
};

int main() {
    Employee emp[100];
    int n = 0, choice, id;
    bool found;

    do {
        cout << "\n===== SALARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Salary Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Salary Record\n";
        cout << "4. Update Salary Record\n";
        cout << "5. Delete Salary Record\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> emp[n].empId;

            cin.ignore();
            cout << "Enter Employee Name: ";
            getline(cin, emp[n].name);

            cout << "Enter Basic Salary: ";
            cin >> emp[n].basicSalary;

            // Calculate HRA, DA, and Gross Salary
            emp[n].hra = emp[n].basicSalary * 0.20;
            emp[n].da = emp[n].basicSalary * 0.10;
            emp[n].grossSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

            n++;
            cout << "\nSalary Record Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "\nNo Salary Records Found.\n";
            } else {
                cout << "\n----- Salary Records -----\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nEmployee ID : " << emp[i].empId << endl;
                    cout << "Name        : " << emp[i].name << endl;
                    cout << "Basic Salary: " << emp[i].basicSalary << endl;
                    cout << "HRA         : " << emp[i].hra << endl;
                    cout << "DA          : " << emp[i].da << endl;
                    cout << "Gross Salary: " << emp[i].grossSalary << endl;
                }
            }
            break;

        case 3:
            cout << "\nEnter Employee ID to Search: ";
            cin >> id;
            found = false;

            for (int i = 0; i < n; i++) {
                if (emp[i].empId == id) {
                    cout << "\nEmployee Found\n";
                    cout << "Employee ID : " << emp[i].empId << endl;
                    cout << "Name        : " << emp[i].name << endl;
                    cout << "Basic Salary: " << emp[i].basicSalary << endl;
                    cout << "HRA         : " << emp[i].hra << endl;
                    cout << "DA          : " << emp[i].da << endl;
                    cout << "Gross Salary: " << emp[i].grossSalary << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nRecord Not Found.\n";
            break;

        case 4:
            cout << "\nEnter Employee ID to Update: ";
            cin >> id;
            found = false;

            for (int i = 0; i < n; i++) {
                if (emp[i].empId == id) {
                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, emp[i].name);

                    cout << "Enter New Basic Salary: ";
                    cin >> emp[i].basicSalary;

                    emp[i].hra = emp[i].basicSalary * 0.20;
                    emp[i].da = emp[i].basicSalary * 0.10;
                    emp[i].grossSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;

                    cout << "\nSalary Record Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nRecord Not Found.\n";
            break;

        case 5:
            cout << "\nEnter Employee ID to Delete: ";
            cin >> id;
            found = false;

            for (int i = 0; i < n; i++) {
                if (emp[i].empId == id) {
                    for (int j = i; j < n - 1; j++) {
                        emp[j] = emp[j + 1];
                    }
                    n--;
                    found = true;
                    cout << "\nRecord Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "\nRecord Not Found.\n";
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