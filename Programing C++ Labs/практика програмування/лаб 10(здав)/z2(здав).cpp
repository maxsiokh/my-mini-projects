#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

float a[10]={-1.1,1.2,1.7,3.2,3.7,1.0,2.4,2.5,7.5,8.1};
float b[10]={1.6,2.3,4.2,3.1,4.0,7.8,9.3,1.4,5.2,6.3};

float suma(float * F , int n){ 
	float s=0;
	for(int i=0;i<n;i++){
		s+=F[i];
	}
}


int main(){
	float res;
	res = (((2+suma(a,6)+pow(suma(b,8),2))/(M_PI+suma(a,9)+(pow(suma(b,5),2))))-(M_E+suma(a,5))+pow(suma(b,6),2));
	cout<<res;
}
