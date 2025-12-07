#include<iostream>
using namespace std;
int main()
{
	int years;
	char grade;
	float basic_salary, bonus, gross, tax, net_salary;
	cout<<" Enter your grade"<<endl;
	cin>>grade;
	cout<<" Enter years of your service "<<endl;
	cin>>years;
	if(grade == 'A')
	{
		basic_salary = 50,000;
	}
	if(grade == 'B')
	{
		basic_salary = 30,000;
	}
	if(grade == 'C')
	{
		basic_salary = 20,000;
	}
	if(years >= 10)
	{
		bonus = basic_salary + 0.10;
	}
	if(years>=5 && years <= 9) 
	{
		bonus = basic_salary + 0.05;
	}
	if(years<5)
	{
		bonus = 0; 
	}
	gross = basic_salary + bonus;
	if(gross > 40,000)
	{
		tax = gross * 0.20;
	}
	if(gross >= 30000 && gross <= 40000)
	{
		tax = gross * 0.10;
	}
	if(gross < 30000)
	{
		tax = 0;
	}
	net_salary= gross - tax;
	cout<<" Basic Salary "<<basic_salary<<endl;
	cout<<" bonus "<<bonus<<endl;
	cout<<" gross "<<gross<<endl;
	cout<<" tax "<<tax<<endl;
	cout<<" net_salary"<<net_salary<<endl;
	return 0;
}

