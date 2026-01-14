#include <iostream>
using namespace std;
int main() 
{
    int number = 100;
    void *voidPtr = &number;
    // Convert the void pointer to an int pointer
    int *intPtr = (int*)voidPtr;
    cout << "The integer value is: " << *intPtr << endl;
    return 0;
}
