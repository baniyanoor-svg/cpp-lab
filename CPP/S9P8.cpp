#include <iostream>
#include <stack>
using namespace std;

bool isMatch(char o, char c) {
    return (o=='(' && c==')') ||
           (o=='{' && c=='}') ||
           (o=='[' && c==']');
}

int main() {
    string s;
    cout << "Enter expression: ";
    cin >> s;

    stack<char> st;

    for (char ch : s) {
        if (ch=='(' || ch=='{' || ch=='[')
            st.push(ch);
        else {
            if (st.empty() || !isMatch(st.top(), ch)) {
                cout << "NOT Balanced";
                return 0;
            }
            st.pop();
        }
    }

    cout << (st.empty() ? "Balanced" : "NOT Balanced");
}