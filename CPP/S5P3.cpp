#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int bookID;
    string title;
    string author;
    float price;

    void read() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore();

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Author: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "ID: " << bookID
             << ", Title: " << title
             << ", Author: " << author
             << ", Price: " << price << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    Book arr[n];
    cout << "\n Enter Book Details\n";

    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << ":\n";
        arr[i].read();
    }

    cin.ignore();
    string key;
    cout << "\nEnter author name (or part of name) to search: ";
    getline(cin, key);

    cout << "\n Books by Author Matching \"" << key << "\" ---\n";
    bool found = false;

    for (int i = 0; i < n; i++) {
        
        if (arr[i].author.find(key) != string::npos) {
            arr[i].display();
            found = true;
        }
    }

    if (!found) {
        cout << "No books found for this author." << endl;
    }

    return 0;
}