
#include<iostream>
using namespace std;
int main()
{
	int x1=3,y1=4,x2=6,y2=8,squared_distance;
	squared_distance= (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
	cout<< "The squared_distance between the points (3,4) and (6,8)" <<" is equal to " << squared_distance;
	return 0;
}

