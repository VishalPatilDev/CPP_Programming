#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Player {
    int jerseyNumber;
    string name;
    int runs;
    int matchesPlayed;
    int wickets;

    Player(int j, string n, int r, int m, int w)
        : jerseyNumber(j), name(n), runs(r), matchesPlayed(m), wickets(w) {}
};

vector<Player> players;

void initializePlayers() {
    players.emplace_back(18, "Virat Kohli", 4000, 5, 100);
    players.emplace_back(93, "Bumrah", 1000, 150, 40);
    players.emplace_back(7, "MS Dhoni", 2000, 10, 70);
    players.emplace_back(45, "Rohit Sharma", 3800, 5, 110);
    players.emplace_back(33, "Hardik Pandya", 2200, 60, 100);
    players.emplace_back(63, "Suryakumar Yadav", 2100, 4, 70);
    players.emplace_back(1, "KL Rahul", 3200, 3, 80);
    players.emplace_back(13, "Virat Mohli", 3000, 5, 40);
}

void addPlayer() {
    int jerseyNumber, runs, matchesPlayed, wickets;
    string name;

    cout << "Enter Jersey Number: ";
    cin >> jerseyNumber;
    cin.ignore();
    cout << "Enter Player Name: ";
    getline(cin, name);
    cout << "Enter Runs: ";
    cin >> runs;
    cout << "Enter Matches Played: ";
    cin >> matchesPlayed;
    cout << "Enter Wickets: ";
    cin >> wickets;

    players.emplace_back(jerseyNumber, name, runs, matchesPlayed, wickets);
    cout << "Player added successfully!" << endl;
}

void removePlayer() {
    int jerseyNumber;
    cout << "Enter Jersey Number of player to remove: ";
    cin >> jerseyNumber;

    auto it = remove_if(players.begin(), players.end(), [jerseyNumber](Player& p) {
        return p.jerseyNumber == jerseyNumber;
    });

    if (it != players.end()) {
        players.erase(it, players.end());
        cout << "Player removed successfully!" << endl;
    } else {
        cout << "Player not found!" << endl;
    }
}

void searchPlayer() {
    int choice;
    cout << "Search by (1) Jersey Number (2) Player Name: ";
    cin >> choice;
    cin.ignore();

    if (choice == 1) {
        int jerseyNumber;
        cout << "Enter Jersey Number: ";
        cin >> jerseyNumber;
        for (auto& player : players) {
            if (player.jerseyNumber == jerseyNumber) {
                cout << "Jersey Number: " << player.jerseyNumber
                    << ", Name: " << player.name
                    << ", Runs: " << player.runs
                    << ", Wickets: " << player.wickets
                    << ", Matches: " << player.matchesPlayed << endl;
                return;
            }
        }
    } else if (choice == 2) {
        string name;
        cout << "Enter Player Name: ";
        getline(cin, name);
        for (auto& player : players) {
            if (player.name == name) {
                cout << "Jersey Number: " << player.jerseyNumber
                    << ", Runs: " << player.runs
                    << ", Wickets: " << player.wickets
                    << ", Matches: " << player.matchesPlayed << endl;
                return;
            }
        }
    }
    cout << "Player not found!" << endl;
}

void updatePlayer() {
    int jerseyNumber;
    cout << "Enter Jersey Number of player to update: ";
    cin >> jerseyNumber;

    for (auto& player : players) {
        if (player.jerseyNumber == jerseyNumber) {
            int choice;
            cout << "Enter choice (1) Runs (2) Wickets (3) Matches: ";
            cin >> choice;
            if (choice == 1) {
                cout << "Enter new Runs: ";
                cin >> player.runs;
            } else if (choice == 2) {
                cout << "Enter new Wickets: ";
                cin >> player.wickets;
            } else if (choice == 3) {
                cout << "Enter new Matches Played: ";
                cin >> player.matchesPlayed;
            }
            cout << "Player data updated successfully!" << endl;
            return;
        }
    }
    cout << "Player not found!" << endl;
}

void displayAllPlayers() {
    if (players.empty()) {
        cout << "No players available." << endl;
        return;
    }

    cout << "Jersey Number\tName\t\t\tRuns\tWickets\tMatches" << endl;
    for (auto& player : players) {
        cout << player.jerseyNumber << "\t\t"
            << player.name << "\t\t"
            << player.runs << "\t"
            << player.wickets << "\t"
            << player.matchesPlayed << endl;
    }
}

void displayTopPlayers() {
    int choice;
    cout << "(1) Top Runs (2) Top Wickets: ";
    cin >> choice;

    if (choice == 1) {
        sort(players.begin(), players.end(), [](Player& a, Player& b) {
            return a.runs > b.runs;
        });
        cout << "Top 3 players by runs:" << endl;
    } else if (choice == 2) {
        sort(players.begin(), players.end(), [](Player& a, Player& b) {
            return a.wickets > b.wickets;
        });
        cout << "Top 3 players by wickets:" << endl;
    } else {
        cout << "Invalid choice!" << endl;
        return;
    }

    for (int i = 0; i < 3 && i < players.size(); i++) {
        cout << players[i].name << " - Runs: " << players[i].runs
            << ", Wickets: " << players[i].wickets << endl;
    }
}

int main() {
    initializePlayers();
    int choice;

    while (true) {
        cout << "\n------------------- Player Management System --------------------" << endl;
        cout << "1. Add Player\n2. Remove Player\n3. Search Player\n4. Update Player Data\n5. Display All Players\n6. Display Top Players\n7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addPlayer(); break;
            case 2: removePlayer(); break;
            case 3: searchPlayer(); break;
            case 4: updatePlayer(); break;
            case 5: displayAllPlayers(); break;
            case 6: displayTopPlayers(); break;
            case 7: return 0;
            default: cout << "Invalid choice! Please try again." << endl;
        }
    }
}
