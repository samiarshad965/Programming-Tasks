#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string username, role,password;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "admin" && password == "password123")
	 {
        cout << " Authentication Successful! " << endl;
		cout << " Enter your role (admin/guest/user): ";
        cin >> role;
		if (role == "admin")
		 {
            cout << "Full Access.";
        } else if (role == "guest")
		 {
            cout << "Limited Access.";
        } else {
            cout << "No Access.";
        }
    } else {
        cout << "Authentication Failed. Access Denied.";
    }

    return 0;
}
