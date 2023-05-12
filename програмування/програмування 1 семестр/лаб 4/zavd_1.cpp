#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	float x,y,n=1;
	x=3.8;
	for  (n=1; n<10; n++){
		y=(pow(cos(x),2))/(pow(x,2)+1);
		cout<<"\n y="<<y<<"   x="<<x;
		x=x+0.6;
		
	}
}


