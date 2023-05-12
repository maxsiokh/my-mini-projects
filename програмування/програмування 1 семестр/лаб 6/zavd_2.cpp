#include <iostream>

#include <math.h>

using namespace std;

int main()
{
	float x0=1.5,x,e=0.001,y;
	int i=0;
	x=x0;
	y=atan(x)+1;
	
	while (fabs(y-x)>=e){
		x=y;
		y=atan(x)+1;
		i=i+1;
		
	}
	cout << "y= " << y;
	cout << " i= " <<i;
	
return 0;
		
	
}
