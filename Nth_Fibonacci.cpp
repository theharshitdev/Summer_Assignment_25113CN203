#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the position (n): ";
    cin >> n;

    if (n == 0) {
        cout << "The 0th Fibonacci term is: 0" << endl;
        return 0;
    }
    if (n == 1) {
        cout << "The 1st Fibonacci term is: 1" << endl;
        return 0;
    }

    int prev2 = 0; 
    int prev1 = 1; 
    int current = 0;

    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;          
        prev1 = current;        
    }

    cout << "The " << n << "th Fibonacci term is: " << current << endl;
    return 0;
}
