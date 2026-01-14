#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 double num;
 cout<<" Enter a number "<<endl;
 cin>>num;
 // using functions
 double sqrt_num = sqrt(num);
 double abs_num = abs(num);
 double sin_num = sin(num);
 double cos_num = cos(num);
 double pow_num = pow(num,3);
 // to display all these
 if (num < 0 )
 {
  cout<<" Squareroot is not defined for negative number "<<endl;
 }
 else
 {
 cout<<" Square Root of "<< num <<" is "<< sqrt(num)<<endl;
 }
 cout<<" Absolute value of "<< num <<" is "<<abs(num)<<endl;
 cout<<" Sin of "<< num << " is "<<sin(num)<<endl;
 cout<<" Cos of "<< num <<" is "<<cos(num)<<endl;
 cout<<" Power of "<< num <<" is "<<pow(num,3)<<endl;
return 0;
}
