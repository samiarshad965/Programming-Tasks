#include <iostream>
using namespace std;
// Simple functions for operations
double add(double a, double b) 
{
    return a + b;
}
double subtract(double a, double b) 
{
    return a - b;
}
double multiply(double a, double b)
 {
    return a * b;
}
double divide(double a, double b) 
{
    return a / b;
}
int main() 
{
    int choice;
    double num1, num2, result;
    while (1) 
	{
        cout << "Simple Calculator" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 5) 
		{
            cout << "Program End" << endl;
            break;
        }
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        if (choice == 1) 
		{
            result = add(num1, num2);
            cout << "Result: " << result << endl;
        }
        else if (choice == 2) {
            result = subtract(num1, num2);
            cout << "Result: " << result << endl;
        }
        else if (choice == 3) {
            result = multiply(num1, num2);
            cout << "Result: " << result << endl;
        }
        else if (choice == 4) {
            if (num2 != 0) {
                result = divide(num1, num2);
                cout << "Result: " << result << endl;
            }
            else
			{
                cout << "Invalid!" << endl;
            }
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}		

