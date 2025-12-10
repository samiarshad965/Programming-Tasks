#include <iostream>
using namespace std;

int main() {
    int choice;
    float amount, convertedAmount;
    const float PKR_RATE = 280.0;
    const float INR_RATE = 83.0;
    const float EURO_RATE = 0.93;
    
    cout << "Currency Converter:"<<endl;
    cout << "1. USD to PKR"<<endl;
    cout << "2. USD to INR"<<endl;
    cout << "3. USD to Euro"<<endl;
    cout << "Enter your choice (1/2/3):"<<endl;
    cin >> choice;
    
    cout << "Enter amount in USD: ";
    cin >> amount;
    
    switch(choice) {
        case 1:
            convertedAmount = amount * PKR_RATE;
            cout << amount << " USD= " << convertedAmount << " PKR "<<endl;
            break;
        case 2:
            convertedAmount = amount * INR_RATE;
            cout << amount << " USD= " << convertedAmount << " INR "<<endl;
            break;
        case 3:
            convertedAmount = amount * EURO_RATE;
            cout << amount << " USD = " << convertedAmount << " Euros "<<endl;
            break;
        default:
            cout << "Invalid choice!"<<endl;
    }
    return 0;
}
