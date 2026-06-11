#include <iostream>

double findFactorial(double num1) {
    int factorial=1;
    for(int i=1;i<=num1;i++){
         factorial=factorial*i;
    }
    return factorial;
    }


int main() {
    double number1;
    std::cout << "Enter the  number: ";
    std::cin >> number1;

    double factorialnumber = findFactorial(number1);
    std::cout << "The factorial of the  number is: " << factorialnumber << std::endl;

    return 0;
}
