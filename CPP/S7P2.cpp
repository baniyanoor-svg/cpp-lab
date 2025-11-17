#include <iostream>
using namespace std;
template <class T>
T sumArray(T arr[], int n)
{
    T sum = 0;
    for (int i = 1; i < n; i++)
        sum += arr[i];

return sum;
}
int main()
{
    cout << "enter array elements and array";
    int n;
    cout << "enter no of elemnts";
    cin >> n;
    int arr[n] ;
    for (int i = 0; i < n; i++)

    {
        cout << "enter elements";
        cin >> arr[i];
    }

    cout<<sumArray(arr,5);
}