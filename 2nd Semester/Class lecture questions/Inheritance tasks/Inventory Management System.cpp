// using runtime polymorphism.
#include <iostream>
using namespace std;
class InventoryItem
{
protected:
    string name;
    double unitPrice;
    string type;

public:
    InventoryItem() { type = "Simple inventory item"; }
    virtual ~InventoryItem() {} // using virtual keyword so that, destructor of derived class objects also call from base class pointer
    // virtual methods for runtime polymorphism
    virtual void input();
    virtual void display();
    virtual double totalCost(void) { return unitPrice; }
    string get_type(void) const { return type; }
};
// Definition of virtual methods of base class.
void InventoryItem ::input()
{
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, name);

    // validating that unit price is greater than 0
    do
    {
        cout << "Enter unit price: ";
        cin >> unitPrice;
    } while (unitPrice < 0);
}
void InventoryItem ::display()
{
    cout << "Name: " << name << endl;
    cout << "Unitprice: " << unitPrice << endl;
    cout << "Total Cost: " << totalCost() << endl;
}
// ---------- Derived Classes Inherting from base class ----------

class BulkItem : public InventoryItem
{
protected:
    int quantity;

public:
    BulkItem() { type = "Bulk item"; } // check notes. (2)
    // override methods for runtime polymorphism
    void input() override;
    void display() override;
    double totalCost(void) override { return unitPrice * quantity; }
};
// Definition for override methods of derived class 1
void BulkItem ::input()
{
    InventoryItem ::input();

    do
    {
        cout << "Enter quantity of " << name << " : ";
        cin >> quantity;
    } while (quantity < 0);
}
void BulkItem ::display()
{
    InventoryItem ::display(); // check notes.
    cout << "Quantity of " << name << " is " << quantity << endl;
}

class DiscountedItem : public InventoryItem
{
protected:
    double discountPercent;

public:
    DiscountedItem() { type = "Discounted item"; }
    // override methods for runtime polymorphism
    void input() override;
    void display() override;
    double totalCost(void) override { return unitPrice * (1 - discountPercent / 100); }
};
// Definition for override methods of derived class 2
void DiscountedItem ::input()
{
    InventoryItem ::input();

    // validating the input of percentage from 0 to 100.
    do
    {
        cout << "Enter percentage of discount available on " << name << " : ";
        cin >> discountPercent;
    } while (discountPercent < 0 || discountPercent > 100);
}
void DiscountedItem ::display()
{
    InventoryItem ::display();
    cout << name << " is " << discountPercent << " % discounted." << endl;
    // final total will be displayed by calling override version of totalCost() function in display() method.
}

class ImportedItem : public InventoryItem
{
protected:
    double importTaxPercent;

public:
    ImportedItem() { type = "imported item"; }
    // override methods for runtime polymorphism
    void input() override;
    void display() override;
    double totalCost(void) override { return unitPrice * (1 + importTaxPercent / 100); }
};
// Definition for override methods of derived class 3
void ImportedItem ::input()
{
    InventoryItem ::input();

    // validating the input of percentage from 0 to 100.
    do
    {
        cout << "Enter amount of import tax applied on " << name << " : ";
        cin >> importTaxPercent;
    } while (importTaxPercent < 0 || importTaxPercent > 100);
}
void ImportedItem ::display()
{
    InventoryItem ::display();
    cout << importTaxPercent << " % tax is applied on " << name << endl;
}

int main()
{
    int total_items;
    int choice;
    double total_cost = 0;

    cout << "Enter quantity of items: ";
    cin >> total_items;

    InventoryItem **items = new InventoryItem *[total_items]; // arr is a double pointer and it points to n number of base type pointers.
    // In memory there is an array of base type pointers and each single pointer can be accessed by arr.

    cout << "Note." << endl;
    cout << "1 - Simple inventory item" << endl;
    cout << "2 - Inventory item in a bulk quantity" << endl;
    cout << "3 - Inventory item with discounted price" << endl;
    cout << "4 - Imported inventory item" << endl;
    cout << "Now choose the type of item(s)" << endl;

    for (int i = 0; i < total_items; i++)
    {
        cout << "choice for item " << i + 1 << " : ";
        cin >> choice;

        if (choice == 1)
        {
            items[i] = new InventoryItem(); // calls default constructor
        }
        else if (choice == 2)
        {
            items[i] = new BulkItem();
        }
        else if (choice == 3)
        {
            items[i] = new DiscountedItem();
        }
        else if (choice == 4)
        {
            items[i] = new ImportedItem();
        }
        else
        {
            cout << "choose a valid choice" << endl;
            i--; // repeat this iteration.
        }
    }
    cout << "Space for " << total_items << " items is allocated." << endl;
    cout << "Now give us an information about them." << endl;
    for (int i = 0; i < total_items; i++)
    {
        cout << "Give information about " << items[i]->get_type() << endl;
        items[i]->input(); // runtime polymorphism happens here. Check notes
    }
    cout << "All the information about " << total_items << " items is saved." << endl;
    cout << "Here is the data of this information." << endl;
    for (int i = 0; i < total_items; i++)
    {
        cout << "Information about item " << i + 1 << endl;
        items[i]->display();
    }
    for (int i = 0; i < total_items; i++)
    {
        total_cost += items[i]->totalCost();
    }
    cout << "Grand Total: " << total_cost << endl;
    for (int i = 0; i < total_items; i++)
    {
        delete items[i];
    }
    delete[] items;
}
