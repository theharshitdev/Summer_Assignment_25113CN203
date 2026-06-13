#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if arr[i] has already appeared
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                isDuplicate = true;
                break;
            }
        }

        if (isDuplicate)
            continue;

        // Count occurrences of arr[i]
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 1) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}