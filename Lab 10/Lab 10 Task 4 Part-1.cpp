#include <iostream>
using namespace std;
int main() 
{
    int rows = 4;  // Number of rows
    int cols = 4;  // Number of columns
    for(int i = 1; i <= rows; i++)
	 { 
        for(int j = 1; j <= cols; j++) 
		{ 
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
