#include <iostream>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
    return a.length() < b.length();
}

int main() {
    int n;

    cout << "Enter number of words: ";
    cin >> n;

    string words[n];

    cout << "Enter words:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    sort(words, words + n, compare);

    cout << "\nWords sorted by length:\n";
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    return 0;
}