
#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int number) {
    int temp = number;
    double sum = 0, count = 0;

    // Count digits
    int countnumber = number;
    while (countnumber > 0) {
        count++;
        countnumber /= 10;
    }

    // Calculate sum of powers
    while (number > 0) {
        int digit = number % 10;
        sum += (double)pow(digit, count);
        number /= 10;
    }

    return temp == sum;
}

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;

    if (isArmstrong(number))
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;

    return 0;
}