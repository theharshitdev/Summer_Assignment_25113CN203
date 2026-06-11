#include <iostream>
double findMaximum(double num1, double num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    double number1, number2;

     std::cout << "Enter first number: ";
    std::cin >> number1;

    std::cout << "Enter second number: ";
    std::cin >> number2;
    double maxResult = findMaximum(number1, number2);
    std::cout << "The maximum number is: " << maxResult << std::endl;

    return 0;
}
