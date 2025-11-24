#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string filename;
    cout << "Enter filename:" << endl;
    cin >> filename;
    ifstream file(filename);

    if (file.is_open())
    {

        string line;
        char ch;
        string word;
        int linecount = 0;
        int charCount = 0;
        int wordCount = 0;

        while (getline(file, line))
        {
            linecount += 1;
        }
        file.clear();
        file.seekg(0, ios::beg);

        while (file.get(ch))
        {
            charCount += 1;
        }
        file.clear();
        file.seekg(0, ios::beg);

        while (file >> word)
        {

            wordCount += 1;
        }

        cout << "\nNumber of lines are: " << linecount;
        cout << "\nNumber of character are: " << charCount;
        cout << "\nNumber of words are: " << wordCount;
    }
}
