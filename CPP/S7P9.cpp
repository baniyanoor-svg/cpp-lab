#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cap, m;
    cin >> cap >> m;

    vector<int> st; 

    while (m--) {
        string cmd;
        cin >> cmd;

        if (cmd == "push") {
            int x;
            cin >> x;
            if (st.size() == cap) {
                cout << "Full" << endl;
            } else {
                st.push_back(x);
            }
        }
        else if (cmd == "pop") {
            if (st.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << st.back() << endl;
                st.pop_back();
            }
        }
    }

    return 0;
}