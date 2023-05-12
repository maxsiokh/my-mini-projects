#include <iostream>

#include <math.h>

using namespace std;

int main()
{
	int s=10,n;
	for(n=10;n<=92;n+=2){
		s=s+(int)n;
	}
	cout<<"suma: "<<(float)s;
}
