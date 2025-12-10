#include <iostream>
#include <string>
using namespace std;

int main() {
    int categoryChoice, itemChoice, quantity;
    double totalPrice = 0.0, discount = 0.0, finalPrice;
    string category, item;
    cout << "Select a category:"<<endl;
    cout << "1. Electronics"<<endl;
    cout << "2. Clothing"<<endl;
    cout << "3. Groceries"<<endl;
    cin >> categoryChoice;
    switch (categoryChoice)
	 {
        case 1:
            category = "Electronics";
            cout << "Electronics - Select an item:"<<endl;
            cout << "1. Laptop ($1000)"<<endl;
            cout << "2. Smartphone ($700)"<<endl;
            cout << "3. Headphones ($150)"<<endl;
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: item = "Laptop"; totalPrice = 1000; break;
                case 2: item = "Smartphone"; totalPrice = 700; break;
                case 3: item = "Headphones"; totalPrice = 150; break;
                default: cout << "Invalid choice"; return 1;
            }
            break;
        case 2:
            category = "Clothing";
            cout << "Clothing - Select an item:"<<endl;
            cout << "1. Jacket ($120)"<<endl;
            cout << "2. T-shirt ($40)"<<endl;
            cout << "3. Jeans ($60)"<<endl;
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: item = "Jacket"; totalPrice = 120; break;
                case 2: item = "T-shirt"; totalPrice = 40; break;
                case 3: item = "Jeans"; totalPrice = 60; break;
                default: cout << "Invalid choice"; return 1;
            }
            break;
        case 3:
            category = "Groceries";
            cout << "Groceries - Select an item:"<<endl;
            cout << "1. Milk ($2)"<<endl;
            cout << "2. Bread ($3)"<<endl;
            cout << "3. Eggs ($5)"<<endl;
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: item = "Milk"; totalPrice = 2; break;
                case 2: item = "Bread"; totalPrice = 3; break;
                case 3: item = "Eggs"; totalPrice = 5; break;
                default: cout << "Invalid choice"; return 1;
            }
            break;
        default:
            cout << "Invalid category choice";
            return 1;
    }
    cout << "Enter quantity: ";
    cin >> quantity;
    totalPrice *= quantity;
    if (totalPrice < 100) discount = 0.0;
    else if (totalPrice >= 100 && totalPrice <= 500) discount = 0.10;
    else discount = 0.20;

    finalPrice = totalPrice - (totalPrice * discount);

    // Invoice generation
    cout << "--- Invoice ---" << endl;
    cout << "Category: " << category << endl;
    cout << "Item: " << item << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total Price: $" << totalPrice << endl;
    cout << "Discount: " << discount * 100 << "%" << endl;
    cout << "Final Price: $" << finalPrice << endl;

    return 0;
}
