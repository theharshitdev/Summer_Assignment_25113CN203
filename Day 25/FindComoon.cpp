#include <iostream>
#include <set>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    set<char> common;

    for (char ch1 : str1) {
        for (char ch2 : str2) {
            if (ch1 == ch2) {
                common.insert(ch1);
            }
        }
    }

    cout << "Common characters are: ";
    for (char ch : common) {
        cout << ch << " ";
    }

    return 0;
}