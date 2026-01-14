#include<iostream>
using namespace std;
int number_type(int num)
{
	if(num % 2 == 0)
	{
	cout<<" Number is Even "<<endl;
    }
    else
    {
    cout<<" Number is Odd "<<endl;
	}
}
int main()
{
	number_type(23);
	number_type(2);
	number_type(8);
	number_type(15);
return 0;
}

