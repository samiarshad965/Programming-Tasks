
#include<iostream>
using namespace std;
int main()
{
	char colour;
	cout<<" Enter a Colour(R/G/Y)"<<endl;
	cin>>colour;
	if(colour== 'R')
	{
		cout<<" Red: Stop "<<endl;
	}
	if(colour=='G')
	{
		cout<<" Green: Go "<<endl;
	}
	if(colour=='Y')
	{
		cout<<" Yellow: Slow Down "<<endl;
	}
	return 0;
}

