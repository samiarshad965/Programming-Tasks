
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double num1=85.5,num2=90.75,num3=88.25;
	double average=(num1+num2+num3)/3;
	cout<< fixed << setprecision(2) <<"The average of 88.5 , 90.75, and 88.25 = "<<average;
	return 0; 
}

