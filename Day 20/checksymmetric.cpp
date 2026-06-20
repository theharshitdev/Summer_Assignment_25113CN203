#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the order of the matrix: ";
    cin >> n;

    int arr[10][10];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    bool symmetric = true;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] != arr[j][i]) {
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric)
        cout << "The matrix is symmetric.";
    else
        cout << "The matrix is not symmetric.";

    return 0;
}