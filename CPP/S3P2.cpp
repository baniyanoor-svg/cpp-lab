#include <iostream>
#include <string>
using namespace std;
class Book
{
public:
    int price;
    string author;
    string title;
    void getData()
    {
        cout << "Enter the price" << endl;
    cin >> price;
    cout << "Enter the author" << author << endl;
    cin >> author;
    cout << "Enter the title" << title << endl;
    cin >> title;
        
    }
    void display()
    {

        cout << "\nPrice:" << price;
        cout << "\nAuthor:" << author;
        cout << "\nTitle:" << title;
    }
};
int main()
{
    Book B1,B2,B3;
    B1.getData();
    B1.display();
    B2.getData();
    B2.display();
    B3.getData();
    B3.display();

    return 0;
}