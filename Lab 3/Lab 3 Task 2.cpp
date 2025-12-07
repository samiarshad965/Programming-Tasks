
#include<iostream>
using namespace std;
int main()
 {
	double item1=12.95,item2=24.95,item3=6.95,item4=14.95,item5=3.95;
	double Subtotal= item1 + item2 + item3 + item4 + item5;
	const double Tax_Rate =0.06;
	double SalesTax= Subtotal*Tax_Rate;
	double totalamount= Subtotal+SalesTax;
	cout<< "Price of item 1:$"<< item1<<endl;
	cout<< "Price of item 2:$"<< item2<<endl;
	cout<< "Price of item 3:$"<< item3<<endl;
	cout<< "Price of item 4:$"<< item4<<endl;
	cout<< "Price of item 5:$"<< item5<<endl; 
	cout<< "Subtotal:"<<Subtotal<<endl;
	cout<< "Sales Tax (6%):$"<<SalesTax<<endl;
	cout<< "Total:"<<totalamount<<endl;
	return 0;	
}


