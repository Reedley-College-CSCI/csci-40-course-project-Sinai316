//Sinai Pulido Course Project


#include <iostream>
#include <fstream>
#include <string> // Removed vector because of the requirements
#include <iomanip>

using namespace std;

// 1. The Player Struct
struct Player {
    int number;
    string name;
    string position;
    string college;
    int experience;
};

// 2. Load data from the file into the vector
void loadRoster(vector<Player>& roster) {
    ifstream inputFile("Roster.txt");
    if (!inputFile) {
        cout << "Notice: 'Roster.txt' not found. Starting with empty roster." << endl;
        return;
    }

    Player temp;
    // Number Name Position College Experience
    while (inputFile >> temp.number >> temp.name >> temp.position >> temp.college >> temp.experience) {
        roster.push_back(temp);
    }
    inputFile.close();
}

// 3. Search Logic
void searchByNumber(const vector<Player>& roster) {
    int searchNum;
    cout << "\nEnter Jersey Number: ";
    cin >> searchNum;

    bool found = false;
    for (const auto& p : roster) {
        if (p.number == searchNum) {
            cout << "\n--- [ PLAYER FOUND ] ---" << endl;
            cout << "Name:       " << p.name << endl;
            cout << "Position:   " << p.position << endl;
            cout << "College:    " << p.college << endl;
            cout << "Experience: " << p.experience << " years" << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "No player found with #" << searchNum << endl;
}

// 4. Main Menu
int main() {
    vector<Player> roster;
    loadRoster(roster);

    int choice = 0;
    while (choice != 2) {
        cout << "\n============================" << endl;
        cout << "  49ERS QUICK-LOOK TOOL" << endl;
        cout << "============================" << endl;
        cout << "1. Look up Player by Number" << endl;
        cout << "2. Exit" << endl;
        cout << "Selection: ";
        cin >> choice;

        if (choice == 1) {
            searchByNumber(roster);
        }
        else if (choice != 2) {
            cout << "Invalid selection." << endl;
        }
    }

    cout << "Program closed. Go Niners!" << endl;
    return 0;
}