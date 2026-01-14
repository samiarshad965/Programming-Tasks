#include <iostream>
using namespace std;
int main() 
{
    int *ptr = 0;  // declare and initialize pointer to Null
    if (ptr == 0) 
	{
        cout << "The pointer is null. It does not point to any valid memory." << endl;
    } else 
	{
        cout << "The pointer is not null. It holds memory address: " << ptr << endl;
    }
    return 0;
}
