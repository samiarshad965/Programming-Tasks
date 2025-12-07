#include<iostream>
using namespace std;
int main()
{
int balance;
char loyal,$;
cout<< " Enter account balance "<<endl;
cin>> balance;
cout<< " Are you a Loyal customer? (1 for yes, 0 for No)";
cin>>loyal ;
cout<< " Account type: " << ((balance <100) ? " Low Balance Account " : (balance <= 500) ? " Standard Account " 
: " Premium account ");
cout<< " Special Offer:" << (((balance >200 ) && (loyal == 1)) ? " Eligible for Special Offer" : " Not Eligible for Special Offer")<<endl;
return 0;
}
