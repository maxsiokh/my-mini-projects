#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	float x,y,w;
	y=-6.5;
	while(y<0.5){
		w=y+sin(y);
		cout<<"w= "<<w<<"\ty= "<<y<<endl;
		y=0.5;
		while(y<=8){
			w=log10(y+pow(y, 1./3));
			y=y+0.5;
			cout<<"w= "<<w<<"\ty= "<<y<<endl;
			
		}
	}
}
