#include<iostream>
using namespace std;
int main()
{
int num;
cout<<" Enter a number "<<endl;
cin>>num;
cout<<" Table of 2: "<<endl;
int i=1;
while(i<=10)
{ 
cout<<num<<"*"<<i<<"="<<num*i<<endl;
i++;
}
return 0;
}

