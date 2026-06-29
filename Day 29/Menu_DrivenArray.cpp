#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value, key;
    int i, max, min, sum;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n===== MENU-DRIVEN ARRAY OPERATIONS =====\n";
        cout << "1. Display Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Search Element\n";
        cout << "5. Find Maximum\n";
        cout << "6. Find Minimum\n";
        cout << "7. Find Sum\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Array Elements: ";
            for (i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;

        case 2:
            cout << "Enter position (0 to " << n << "): ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> value;

            if (pos >= 0 && pos <= n) {
                for (i = n; i > pos; i--)
                    arr[i] = arr[i - 1];

                arr[pos] = value;
                n++;
                cout << "Element inserted successfully.\n";
            } else {
                cout << "Invalid Position!\n";
            }
            break;

        case 3:
            cout << "Enter position to delete: ";
            cin >> pos;

            if (pos >= 0 && pos < n) {
                for (i = pos; i < n - 1; i++)
                    arr[i] = arr[i + 1];

                n--;
                cout << "Element deleted successfully.\n";
            } else {
                cout << "Invalid Position!\n";
            }
            break;

        case 4:
            cout << "Enter element to search: ";
            cin >> key;

            for (i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Element found at index " << i << endl;
                    break;
                }
            }

            if (i == n)
                cout << "Element not found.\n";

            break;

        case 5:
            max = arr[0];
            for (i = 1; i < n; i++)
                if (arr[i] > max)
                    max = arr[i];

            cout << "Maximum Element = " << max << endl;
            break;

        case 6:
            min = arr[0];
            for (i = 1; i < n; i++)
                if (arr[i] < min)
                    min = arr[i];

            cout << "Minimum Element = " << min << endl;
            break;

        case 7:
            sum = 0;
            for (i = 0; i < n; i++)
                sum += arr[i];

            cout << "Sum of Elements = " << sum << endl;
            break;

        case 8:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 8);

    return 0;
}