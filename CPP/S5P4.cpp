#include <iostream>
#include <string>
using namespace std;

class Cricketer {
public:
    string playerName;
    int matches;
    int runs;
    float average;

    void read() {
        cout << "Enter Player Name: ";
        cin.ignore();
        getline(cin, playerName);

        cout << "Enter Matches Played: ";
        cin >> matches;

        cout << "Enter Total Runs: ";
        cin >> runs;

        
        average = (matches == 0) ? 0 : (float)runs / matches;
    }

    void display() {
        cout << playerName << " | Matches: " << matches
             << " | Runs: " << runs
             << " | Avg: " << average << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of players: ";
    cin >> n;

    Cricketer arr[n];

    
    cout << "\n--- Enter Player Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nPlayer " << i + 1 << ":\n";
        arr[i].read();
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].average < arr[j + 1].average) {
                
                Cricketer temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    cout << "\n Players Sorted by Average (Descending) \n";
    for (int i = 0; i < n; i++) {
        arr[i].display();
    }

    return 0;
}