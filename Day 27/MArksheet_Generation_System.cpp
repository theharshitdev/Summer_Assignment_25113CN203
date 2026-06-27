#include <iostream>
#include <string>
using namespace std;

struct Student {
    int roll;
    string name;
    float m1, m2, m3, total, percentage;
    char grade;
};

int main() {
    Student s[100];
    int n = 0, choice, roll;
    bool found;

    do {
        cout << "\n<-----MARKSHEET GENERATION SYSTEM ------>\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Marksheets\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student Marks\n";
        cout << "5. Delete Student Record\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> s[n].roll;

            cin.ignore();
            cout << "Enter Student Name: ";
            getline(cin, s[n].name);

            cout << "Enter Marks of Subject 1: ";
            cin >> s[n].m1;

            cout << "Enter Marks of Subject 2: ";
            cin >> s[n].m2;

            cout << "Enter Marks of Subject 3: ";
            cin >> s[n].m3;

            s[n].total = s[n].m1 + s[n].m2 + s[n].m3;
            s[n].percentage = s[n].total / 3;

            if (s[n].percentage >= 90)
                s[n].grade = 'A';
            else if (s[n].percentage >= 75)
                s[n].grade = 'B';
            else if (s[n].percentage >= 60)
                s[n].grade = 'C';
            else if (s[n].percentage >= 40)
                s[n].grade = 'D';
            else
                s[n].grade = 'F';

            n++;
            cout << "\nMarksheet Generated Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "\nNo Records Found.\n";
            } else {
                cout << "\n===== STUDENT MARKSHEETS =====\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nRoll Number : " << s[i].roll;
                    cout << "\nName        : " << s[i].name;
                    cout << "\nSubject 1   : " << s[i].m1;
                    cout << "\nSubject 2   : " << s[i].m2;
                    cout << "\nSubject 3   : " << s[i].m3;
                    cout << "\nTotal Marks : " << s[i].total;
                    cout << "\nPercentage  : " << s[i].percentage << "%";
                    cout << "\nGrade       : " << s[i].grade << endl;
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
                    cout << "Name        : " << s[i].name << endl;
                    cout << "Total Marks : " << s[i].total << endl;
                    cout << "Percentage  : " << s[i].percentage << "%" << endl;
                    cout << "Grade       : " << s[i].grade << endl;
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

                    cout << "Enter New Marks of Subject 1: ";
                    cin >> s[i].m1;

                    cout << "Enter New Marks of Subject 2: ";
                    cin >> s[i].m2;

                    cout << "Enter New Marks of Subject 3: ";
                    cin >> s[i].m3;

                    s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
                    s[i].percentage = s[i].total / 3;

                    if (s[i].percentage >= 90)
                        s[i].grade = 'A';
                    else if (s[i].percentage >= 75)
                        s[i].grade = 'B';
                    else if (s[i].percentage >= 60)
                        s[i].grade = 'C';
                    else if (s[i].percentage >= 40)
                        s[i].grade = 'D';
                    else
                        s[i].grade = 'F';

                    cout << "\nRecord Updated Successfully!\n";
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
                    cout << "\nRecord Deleted Successfully!\n";
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