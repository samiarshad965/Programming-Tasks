#include <iostream>
using namespace std;
int main()
 {
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;
    for (int i = 0; i < 4; i++)
	 {
        cout << "Element " << i << ": " <<*(ptr +i)<< endl;  // pointer arithmetic
     }
    return 0;
}

