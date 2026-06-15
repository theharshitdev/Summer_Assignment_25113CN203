#include <iostream>
using namespace std;

int main() {
    int n, k;
     cout<<"Enter the array size:";
    cin >> n;
    int arr[n];
    cout<<"Enter the array elements:";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Enter k position to shift:";
    cin >> k;
    k = k % n;
    while(k--) {
        int first = arr[0];

        for(int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = first;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}