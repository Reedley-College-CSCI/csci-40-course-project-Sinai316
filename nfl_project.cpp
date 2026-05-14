//Sinai Pulido Course Project


#include <iostream>
#include <fstream>
#include <string> // Removed vector because of the requirements
#include <iomanip>

using namespace std;
const int MAX_PLAYERS = 100; // added a max amount of players
// 1. The Player Struct
struct Player {
    int number;
    string firstName; // created first and last names 
    string lastName;
    string position;
    string college;
    int experience;
};

// 2. Load data from the file into the vector UPDATE: CHANGED TO AN ARRAY 
int loadRoster(Player roster[]) {
    ifstream inputFile("Rosters.txt");
    if (!inputFile) {
        cout << "Notice: 'Rosters.txt' not found. Starting with empty roster." << endl;
        return 0;
    }

    
    // Number Name Position College Experience
    while (count < MAX_PLAYERS && inputFile >> roster[count].number) {
        inputFile >> roster[count].firstName >> roster[count].lastName >> roster[count].position // Added the first and last names
            >> roster[count].college >> roster[count].experience;
        count++;
    }
    inputFile.close();
    return count;
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
