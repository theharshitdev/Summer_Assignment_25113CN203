#include <iostream>
using namespace std;

int reversenumber(int n) {
    int reverse=0;
    while(n>0)
    {
        int remainder=n%10;
         reverse=reverse*10+remainder;
         n/=10;
    }
    return reverse;  // Recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Reverse NUmber is = " << reversenumber(n);

    return 0;
}