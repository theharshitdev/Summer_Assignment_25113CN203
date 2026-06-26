#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char answer;

    cout << "=================================\n";
    cout << "      C++ Quiz Application\n";
    cout << "=================================\n\n";

    // Question 1
    cout << "Q1. Which language is used for system programming?\n";
    cout << "A. HTML\nB. C++\nC. CSS\nD. SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'B' || answer == 'b')
        score++;

    // Question 2
    cout << "\nQ2. Which symbol is used to end a statement in C++?\n";
    cout << "A. :\nB. ;\nC. .\nD. ,\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'B' || answer == 'b')
        score++;

    // Question 3
    cout << "\nQ3. Which loop is guaranteed to execute at least once?\n";
    cout << "A. for\nB. while\nC. do-while\nD. None\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'C' || answer == 'c')
        score++;

    // Question 4
    cout << "\nQ4. Which operator is used for equality comparison?\n";
    cout << "A. =\nB. ==\nC. !=\nD. >=\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'B' || answer == 'b')
        score++;

    // Question 5
    cout << "\nQ5. Which function is used to display output in C++?\n";
    cout << "A. scanf()\nB. printf()\nC. cin\nD. cout\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'D' || answer == 'd')
        score++;

    // Display Result
    cout << "\n=================================\n";
    cout << "Quiz Completed!\n";
    cout << "Your Score: " << score << " out of 5\n";

    if (score == 5)
        cout << "Excellent! Perfect Score!\n";
    else if (score >= 3)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    cout << "=================================\n";

    return 0;
}