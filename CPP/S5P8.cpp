#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int id;
    string name;
    float price;
    float discount;

public:
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> id;
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Discount (%): ";
        cin >> discount;
    }

    void display() const
    {
        cout << id << "  " << name << "  Price: " << price
             << "  Discount: " << discount
             << "%  Final Price: " << finalPrice() << endl;
    }

    float finalPrice() const
    {
        return price - (price * discount / 100);
    }
};

void sortByFinalPrice(Product arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].finalPrice() > arr[j + 1].finalPrice())
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

float computeTotal(Product arr[], int n)
{
    float total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i].finalPrice();
    }
    return total;
}


int main()
{
    int n;
    cout << "Enter number of products in cart: ";
    cin >> n;

    Product cart[n];

  
    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << ":\n";
        cart[i].input();
    }

    
    sortByFinalPrice(cart, n);

    cout << "\nProducts sorted by final price:\n";
    for (int i = 0; i < n; i++)
    {
        cart[i].display();
    }

   
    float total = computeTotal(cart, n);
    cout << "\nTotal Amount Payable: " << total << endl;

    return 0;
}