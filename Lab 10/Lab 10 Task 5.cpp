#include <iostream>
using namespace std;
int main()
 {
    int n;
    long long factorial = 1; 
    cout << "Enter a number: ";
    cin >> n;
    // Check if the number is negative
    if (n < 0)
	 {
        cout << "The factorial of negative numbers is not defined." << endl;
    }
    else 
	{
        for (int i = 1; i <= n; i++)
		 {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial << endl;
    }
    return 0;
}
