#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<< " Enter age"<<endl;
	cin>> age;
	(age <13) ? cout<< " Age " << age << " falls under the category: Child "<<endl
	:(age>=13 && age <=19) ? cout<< " Age " << age << " falls under the category : Teenager " <<endl
    :cout<< " Age " << age << " falls under the category : Adult " <<endl;
  return 0;
}
