#include <iostream>
using namespace std;
// Function to show menu
void showMenu() 
{
    cout << "****Restaurant Menu****" << endl;
    cout << "1. Chicken Karahi - 1500" << endl;
    cout << "2. Mutton Karahi - 2000" << endl;
    cout << "3. Egg Fried Rice - 800" << endl;
    cout << "4. Chicken Saji - 1200" << endl;
    cout << "5. Exit" << endl;
}
// Function to calculate item total
double itemTotal(double price, int quantity)
 {
    return price * quantity;
}
// Function to calculate final bill with tax
double finalBill(double total) 
{
    double tax = 0.10;
    return total + (total * tax);
}
int main()
 {
    int choice, quantity, cont = 1;
    double total = 0;
    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 5) 
		{
            break;
        }
        cout << "Enter quantity: ";
        cin >> quantity;
        double price = 0;
        if (choice == 1) price = 1500;
        else if (choice == 2) price = 2000;
        else if (choice == 3) price = 800;
        else if (choice == 4) price = 1200;
        else 
		{
            cout << "Invalid choice!" << endl;
        }
        total = total + itemTotal(price, quantity);
        cout << "Add more items? (1 for yes, 0 for no): ";
        cin >> cont;
    }
	 while (cont == 1);
    double bill = finalBill(total);
    cout << "Total bill with tax: " << bill << endl;
    cout << "Thankyou for ordering!" << endl;
    return 0;
}
