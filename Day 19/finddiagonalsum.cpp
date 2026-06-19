#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the order of matrix: ";
    cin >> n;

    int arr[10][10];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int primarySum = 0, secondarySum = 0;

    for(int i = 0; i < n; i++) {
        primarySum += arr[i][i];
        secondarySum += arr[i][n - 1 - i];
    }

    cout << "Primary Diagonal Sum = " << primarySum << endl;
    cout << "Secondary Diagonal Sum = " << secondarySum << endl;

    return 0;
}