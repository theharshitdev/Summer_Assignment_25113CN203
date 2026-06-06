#include <iostream>
using namespace std;

int sumofdigit(int n) {
    int sum=0;
    while(n>0)
    {
        int remainder=n%10;
         sum=sum+remainder;
         n/=10;
    }
    return sum;  // Recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "sum of the digit = " << sumofdigit(n);

    return 0;
}