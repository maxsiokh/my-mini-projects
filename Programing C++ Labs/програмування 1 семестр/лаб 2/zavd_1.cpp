#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	float x,y,z,a,b ;
	cin>>a>>b;
	cout << "a="<<a ;
	cout << "\nb="<<b ;
	x=(pow(sin(pow(a,3)),2)-asin(1/b))/(log10(a+b)-1);
	cout<<"nx="<<x;
	z=sqrt(fabs((a+b)/(a*b))+M_PI);
	cout<<"\nz="<<z;
	y=(pow(x,2)-pow(z,2))/(y*fabs(x-7));
	cout<<"\ny="<<y;

	return 0;
}
