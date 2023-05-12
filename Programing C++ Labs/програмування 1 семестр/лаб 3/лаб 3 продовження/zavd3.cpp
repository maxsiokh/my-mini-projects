#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	float x,y,f,g;
	cout<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	f=x+y;
	g=y-x;
	
	if (f>1 && g>1 )
	 cout<<"Nalegit figyri";
	else cout<<"NE Nalegit figyri";
	
	
	
	return 0;
}
