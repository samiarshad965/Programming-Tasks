
#include<iostream>
using namespace std;
int main()
{
	double account_balance , withdrawal_amount;
	cout<<" Enter Account balance "<<endl;
	cin>>account_balance;
	cout<<" Enter withdrawal amount "<<endl;
	cin>>withdrawal_amount; 
	if(withdrawal_amount <= account_balance)
	{
	double Remainning_balance= account_balance - withdrawal_amount;
		cout<<" Remainning balance: "<< Remainning_balance<<endl;
	}
	else
	{
		cout<<" Insufficient balance "<<endl;
	}
		return 0;
}

