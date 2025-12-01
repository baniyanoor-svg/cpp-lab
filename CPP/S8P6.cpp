#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

string toLowerStr(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

int main() {
    string filename, word, temp;
    cout << "Enter filename: ";
    cin >> filename;
    cout << "Enter word to search: ";
    cin >> word;

    ifstream fin(filename);
    if (!fin) {
        cout << "File not found!" << endl;
        return 0;
    }

    int count = 0;
    word = toLowerStr(word);

    while (fin >> temp) {
        temp = toLowerStr(temp);
        if (temp == word) count++;
    }

    cout << "Occurrences: " << count << endl;
}