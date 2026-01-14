#include <iostream>
using namespace std;
int main() 
{
    int num = 10;         // integer variable
    int *ptr = &num;
    cout << "Value of num: " << *ptr << endl;  // dereferencing pointer
    return 0;
}
