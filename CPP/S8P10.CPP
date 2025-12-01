#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("numbers.txt");
    if (!fin) {
        cout << "Error opening file!" << endl;
        return 0;
    }

    int num, sum = 0, count = 0;
    int maxN = INT_MIN, minN = INT_MAX;

    while (fin >> num) {
        sum += num;
        if (num > maxN) maxN = num;
        if (num < minN) minN = num;
        count++;
    }

    if (count == 0) {
        cout << "File contains no valid integers!" << endl;
        return 0;
    }

    cout << "Sum: " << sum << endl;
    cout << "Max: " << maxN << endl;
    cout << "Min: " << minN << endl;
    cout << "Count: " << count << endl;

    return 0;
}