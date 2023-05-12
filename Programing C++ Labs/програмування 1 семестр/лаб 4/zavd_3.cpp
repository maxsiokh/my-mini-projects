#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	float z,x,y;
	y=-2;
	while(y<=1){
		x=2.1;
		while(x<=4.6){
			z=sqrt(exp(x+y)+1);
			cout<<"\n z="<<z<<"    y="<<y<<"    x="<<x;
			x=x+0.2;
		}
		y=y+0.1;
	}
	return (0);
}
