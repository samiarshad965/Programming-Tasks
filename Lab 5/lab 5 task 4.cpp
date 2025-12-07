#include<iostream>
using namespace std;
int main()
{
int marks;
cout<<" Enter your Marks(0-100)"<<endl;
cin>>marks;
if(marks>=90)
{
	cout<<"A+"<<endl;
}
if(marks>=80 && marks<=89)
{
	cout<<"A"<<endl;
}
if(marks>=70 && marks<=79)
{
	cout<<"B"<<endl;
}
if(marks>=60 && marks<=69)
{
	cout<<"C"<<endl;
}
if(marks<60)
{
	cout<<"Fail"<<endl;
}
return 0;
}
