#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int playerID[MAX], runs[MAX], wickets[MAX], matches[MAX], n = 0;
string playerName[MAX];

// Add Player
void addPlayer() {
    cout << "\nEnter Player ID: ";
    cin >> playerID[n];
    cin.ignore();

    cout << "Enter Player Name: ";
    getline(cin, playerName[n]);

    cout << "Enter Matches Played: ";
    cin >> matches[n];

    cout << "Enter Runs: ";
    cin >> runs[n];

    cout << "Enter Wickets: ";
    cin >> wickets[n];

    n++;
    cout << "Player Added Successfully!\n";
}

// Display Players
void displayPlayers() {
    if (n == 0) {
        cout << "No Player Records Found!\n";
        return;
    }

    cout << "\n---------------------------------------------------------------\n";
    cout << "ID\tName\t\tMatches\tRuns\tWickets\n";
    cout << "---------------------------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << playerID[i] << "\t"
             << playerName[i] << "\t\t"
             << matches[i] << "\t"
             << runs[i] << "\t"
             << wickets[i] << endl;
    }
}

// Search Player
void searchPlayer() {
    int id;
    bool found = false;

    cout << "Enter Player ID: ";
    cin >> id;

    for (int i = 0; i < n; i++) {
        if (playerID[i] == id) {
            cout << "\nPlayer Found\n";
            cout << "ID       : " << playerID[i] << endl;
            cout << "Name     : " << playerName[i] << endl;
            cout << "Matches  : " << matches[i] << endl;
            cout << "Runs     : " << runs[i] << endl;
            cout << "Wickets  : " << wickets[i] << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Player Not Found!\n";
}

// Update Runs
void updateRuns() {
    int id;
    bool found = false;

    cout << "Enter Player ID: ";
    cin >> id;

    for (int i = 0; i < n; i++) {
        if (playerID[i] == id) {
            cout << "Enter New Runs: ";
            cin >> runs[i];
            cout << "Runs Updated Successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Player Not Found!\n";
}

// Highest Scorer
void highestScorer() {
    if (n == 0) {
        cout << "No Records Available!\n";
        return;
    }

    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (runs[i] > runs[maxIndex])
            maxIndex = i;
    }

    cout << "\n===== Highest Scorer =====\n";
    cout << "Player ID : " << playerID[maxIndex] << endl;
    cout << "Name      : " << playerName[maxIndex] << endl;
    cout << "Runs      : " << runs[maxIndex] << endl;
}

// Delete Player
void deletePlayer() {
    int id;
    bool found = false;

    cout << "Enter Player ID: ";
    cin >> id;

    for (int i = 0; i < n; i++) {
        if (playerID[i] == id) {

            for (int j = i; j < n - 1; j++) {
                playerID[j] = playerID[j + 1];
                playerName[j] = playerName[j + 1];
                matches[j] = matches[j + 1];
                runs[j] = runs[j + 1];
                wickets[j] = wickets[j + 1];
            }

            n--;
            found = true;
            cout << "Player Deleted Successfully!\n";
            break;
        }
    }

    if (!found)
        cout << "Player Not Found!\n";
}

int main() {

    int choice;

    do {
        cout << "\n========== CRICKET SCORE MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Player\n";
        cout << "2. Display Players\n";
        cout << "3. Search Player\n";
        cout << "4. Update Runs\n";
        cout << "5. Highest Scorer\n";
        cout << "6. Delete Player\n";
        cout << "7. Exit\n";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            addPlayer();
            break;

        case 2:
            displayPlayers();
            break;

        case 3:
            searchPlayer();
            break;

        case 4:
            updateRuns();
            break;

        case 5:
            highestScorer();
            break;

        case 6:
            deletePlayer();
            break;

        case 7:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 7);

    return 0;
}