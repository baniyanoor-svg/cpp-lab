#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    int code;
    string name;
    int quantity;

public:
    
    Item() {
        code = 0;
        name = "";
        quantity = 0;
    }

    
    Item(int c, string n, int q) {
        code = c;
        name = n;
        quantity = q;
    }

    
    int getCode() const {
        return code;
    }

    Item operator+(const Item& obj) {
        if (code == obj.code) {
           
            return Item(code, name, quantity + obj.quantity);
        }
        else {
          
            return *this;
        }
    }

   
    void display() const {
        cout << code << "  " << name << "  " << quantity << endl;
    }
};


void mergeInventory(Item inv1[], int n1, Item inv2[], int n2, Item result[], int &k) {
    k = 0;

   
    for (int i = 0; i < n1; i++) {
        result[k++] = inv1[i];
    }

    for (int i = 0; i < n2; i++) {
        bool found = false;

        for (int j = 0; j < k; j++) {
            if (result[j].getCode() == inv2[i].getCode()) {
               
                result[j] = result[j] + inv2[i];
                found = true;
                break;
            }
        }

        if (!found) {
            result[k++] = inv2[i];
        }
    }
}

int main() {
 
    Item inv1[3] = {
        Item(101, "Pen", 50),
        Item(102, "Pencil", 80),
        Item(103, "Notebook", 20)
    };

 
    Item inv2[3] = {
        Item(101, "Pen", 40),       
        Item(104, "Marker", 30),
        Item(103, "Notebook", 10)   
    };

    Item result[10];
    int size = 0;

    mergeInventory(inv1, 3, inv2, 3, result, size);

    cout << "Merged Inventory:\n";
    for (int i = 0; i < size; i++) {
        result[i].display();
    }

    return 0;
}