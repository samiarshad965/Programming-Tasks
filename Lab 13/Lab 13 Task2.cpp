#include <iostream>
using namespace std;
int main()
 {
    int num = 5;          // integer variable
    int *ptr = &num;      // pointer to num
    *ptr = 20;            // changing value using pointer
    cout << "Modified value of num: " << num << endl;
    return 0;
}
