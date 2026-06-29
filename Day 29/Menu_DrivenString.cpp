#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char str[100], temp[100];
    int choice;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    do {
        cout << "\n===== MENU-DRIVEN STRING OPERATIONS =====\n";
        cout << "1. Find Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Convert to Uppercase\n";
        cout << "4. Convert to Lowercase\n";
        cout << "5. Check Palindrome\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Length of String = " << strlen(str) << endl;
                break;

            case 2:
                strcpy(temp, str);
                strrev(temp);
                cout << "Reversed String = " << temp << endl;
                break;

            case 3:
                strcpy(temp, str);
                for (int i = 0; temp[i] != '\0'; i++)
                    temp[i] = toupper(temp[i]);
                cout << "Uppercase String = " << temp << endl;
                break;

            case 4:
                strcpy(temp, str);
                for (int i = 0; temp[i] != '\0'; i++)
                    temp[i] = tolower(temp[i]);
                cout << "Lowercase String = " << temp << endl;
                break;

            case 5:
                strcpy(temp, str);
                strrev(temp);

                if (strcmp(str, temp) == 0)
                    cout << "The string is a Palindrome." << endl;
                else
                    cout << "The string is NOT a Palindrome." << endl;
                break;

            case 6:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice! Please try again." << endl;
        }

    } while (choice != 6);

    return 0;
}