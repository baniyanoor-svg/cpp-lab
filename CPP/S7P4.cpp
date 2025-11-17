
#include <iostream>
using namespace std;

template <typename T>
void scaleVector(T arr[], int n, T factor) {
    for (int i = 0; i < n; i++) {
        arr[i] *= factor;
    }
}

int main() {
    string type;
    int n;
    cin >> type >> n;

    if (type == "int") {
        int* arr = new int[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        int factor;
        cin >> factor;

        scaleVector(arr, n, factor);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;

        delete[] arr;
    }
    else if (type == "double") {
        double* arr = new double[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        double factor;
        cin >> factor;

        scaleVector(arr, n, factor);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;

        delete[] arr;
    }
    else {
        cout << "Invalid type";
    }

    return 0;
}