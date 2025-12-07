#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<< "Enter an integer"<<endl;
	cin>> a;
    (a %2 ==0) ? cout<< " The number "<< a <<" is even "<< endl
             : cout<< " The number "<< a <<" is odd "<< endl;
   return 0;
}
