#include <iostream>

#include <math.h>

using namespace std;

int main()
{
	float x,y,xi,i, x1=0.15, delx=0.05,sum=0;
	i=2;
	do {
		x=x1+delx*(i+2);
		xi=x1+delx*(i+1);
		
		y=pow(xi-x,2);
		sum+=y;
		i++;
		cout<<"\n y="<<y<<"   suma="<<sum<<endl;
		
	}while(i<=18);
	return 0;
}
