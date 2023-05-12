#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
	float a[6]={0.4,8.8,7.4,12.5,5,0};
	float b[6]={-4.1,3.2,0.7,-4.1,2.2,4.8};
	
	float 	x=15.03*pow(10,-2), y=4.4;
	
float dobytok(float * F , int k, int n,  ){   //K- це від якого елемента n- це до якого елемента, F= масив)))))

	double S;
	S=1;

	for (int i=k ; i < n; i++) {
		S=S*F[i];
	}
	
	return S;
}

float cosinus(int step, int a){ // step-степінь, a - число
	float C = pow(cos(0.7-a),step);
	
	return(C);
}

int main (){
	float B;
	
	B = ((pow((dobytok(b,1,5)-dobytok(a,1,5 )),2)/cosinus(2,x))-((cosinus(3,x*y))/(pow(dobytok(b,2,5),3)-dobytok(a,2,5)))+((dobytok(a,3,6)-dobytok(b,3,6))/cosinus(2,1.2*y)));
	
	cout<<B;

}




