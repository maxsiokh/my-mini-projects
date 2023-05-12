#include <iostream>

#include <math.h>

using namespace std;

int main()
{
	float x=1.5, e=0.01, ak=1, p,s;
	int k=0,i;
	
	s=ak;
	
	while (fabs(ak)>=e){
		k = k+1;
		p=x/k;
		ak = ak*p;
		s = s+ak;
		i= i+1;
		
	}
	cout<<"y ("<<x<<")="<<s;
	cout << "\n "<<i;
}
