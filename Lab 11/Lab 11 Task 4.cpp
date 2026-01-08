#include <iostream>
using namespace std;
int main()
 {
    int arr[5] = {4, 5, 7, 8, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Array length: " << length << endl;
    return 0;
}
