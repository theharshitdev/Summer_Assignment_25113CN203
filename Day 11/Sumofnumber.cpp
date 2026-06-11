#include <iostream>
double addNumbers(double num1, double num2) {
    return num1 + num2;
}

int main() {
    double number1, number2;
    std::cout << "Enter first number: ";
    std::cin >> number1;
    std::cout << "Enter second number: ";
    std::cin >> number2;
    double result = addNumbers(number1, number2);
    std::cout << "The sum of " << number1 << " and " << number2 << " is " << result << std::endl;

    return 0;
}
