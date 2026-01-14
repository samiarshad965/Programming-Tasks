#include<iostream>
using namespace std;
double factorial(int num)
{
  double factorial = 1;
  for(int i=1 ; i<=num ; i++)
  {
   factorial *= i;
  }
return factorial;
}
int main()
 {
   int n;
   cout<<" Enter a number "<<endl;
   cin>> n;
   factorial(n);
   if(n<0)
   {
   	cout<<" Factorial of negative number is not defined "<<endl;
   }
  else
   {
   cout<< " Factorial of " << n << " is equal to: "<< factorial(n)<<endl;
   }
return 0;
 }
