 #include <iostream>

#include <math.h>

using namespace std;

int main()
{
	float x,n,e,y,y1;
	x=5.3;
	n=6;
	e=0.01;
	
	y=x;
	y1=(1/n)*(x/pow(y,n-1)+(n-1)*y);
	while(fabs(y1-y)>e){
		y=y1;
		y1=(1/n)*(x/pow(y,n-1)+(n-1)*y);
	}
cout<<"y1= "<<y1;
return(0) ;
}
