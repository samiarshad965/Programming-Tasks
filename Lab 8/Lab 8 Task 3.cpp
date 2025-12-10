#include <iostream>
using namespace std;

int main() 
{
    int choice;
    double area, radius, length, width, base, height;
    cout << "Select shape:"<<endl;
	cout<< "1.Circle"<<endl;
	cout<< "2.Rectangle"<<endl;
	cout<< "3.Traingle"<<endl;
	cout<< "Enter your choice"<<endl;
    cin >> choice;

    switch (choice)
	 {
        case 1:
            cout << "Enter radius: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            cout << "Area of Circle: " << area <<endl;
            break;
        case 2:
            cout << "Enter length and width: ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of Rectangle: " << area << endl;
            break;
        case 3:
            cout << "Enter base and height: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of Triangle: " << area << endl;
            break;
        default:
            cout << "Error: Invalid choice!" << endl;
    }
    return 0;
}
