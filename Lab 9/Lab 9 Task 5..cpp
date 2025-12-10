#include<iostream>
using namespace std;
int main()
{
    int choice = 0;
    int balance = 1000;
    int amount;

    while (choice != 4) 
	{
	    cout<< "1 Deposit "<<endl;
		cout<< "2 With draw money" <<endl;
		cout<< "3 Balance "<<endl;
		cout<< "4 Exit" <<endl;
        cout << "Enter choice: "<<endl;
        cin >> choice;

        if (choice == 1) {
            cout << "Enter amount: ";
            cin >> amount;
            balance = balance + amount;
        }

        if (choice == 2) {
            cout << "Enter amount: ";
            cin >> amount;

            if (amount <= balance) {
                balance = balance - amount;
            }
            if (amount > balance) {
                cout << "Not enough balance"<<endl;
            }
        }

        if (choice == 3) {
            cout << "Balance is: " << balance << endl;
        }

        if (choice > 4 || choice < 1) {
            cout << "Wrong choice"<<endl;
        }
    }

    cout << "Program Ended"<<endl;
    return 0;
}

