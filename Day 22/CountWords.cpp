#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;
    bool inWord = false;

    for (char ch : str) {
        if (ch != ' ' && !inWord) {
            count++;
            inWord = true;
        }
        else if (ch == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words = " << count;

    return 0;
}