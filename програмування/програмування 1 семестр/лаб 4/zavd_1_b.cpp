#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	float i,x,y;
	x=3.8;
	while( x<=7.6){
		y=(pow(cos(x),2))/(pow(x,2)+1);
		cout<<"\n y="<<y<<"   x="<<x;
		x=x+0.6;
		
		}

	return (0);
}


