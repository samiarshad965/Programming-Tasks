#include <iostream>
using namespace std;
int main()
 {
    int arr[4] = {10, 20, 40, 50};
    int sum = 0; 
    for (int i = 0; i < 4; i++) 
	{
        sum += arr[i];
    }
    double average =sum / 4;
    cout << " Sum: " << sum << endl;
    cout << " Average: " << average << endl;
    return 0;
}
