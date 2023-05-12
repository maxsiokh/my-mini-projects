#include <iostream>

#include <math.h>

using namespace std;

int main()
{
	float x,y,xi,i, x1=0.15, delx=0.05,sum=0;
	for(i=2;i<=18;i++){
		x=x1+delx*(i+2);
		xi=x1+delx*(i+1);
		
		y=pow(xi-x,2);
		sum+=y;
		cout<<"\n y="<<y<<"   suma="<<sum<<endl;
	}
	return 0;
}
