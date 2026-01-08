#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter number of elements: "<<endl;
    cin >> n;
    int arr[n];
    cout << " Enter " << n << " integers: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array in reverse order: "<<endl;
    for (int i = n - 1; i >= 0; i--) 
	{
        cout << arr[i]<<endl;
    }
    cout << endl;
    return 0;
}
