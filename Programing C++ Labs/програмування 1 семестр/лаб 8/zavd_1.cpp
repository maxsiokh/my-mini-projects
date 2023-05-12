#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	int m=3, n=3;
	float sum=0.0;
	float A[m][n]={{2.1,1.5,0.3},{0.2,0.5,0.4},{1.3,2.0,3.1}};
//	float B[m][n]={{},{},{}};
	
	for (int i = 0; i<m; i++){
		
		for(int j = 0; j<n; j++){
//			sum =sum + A[i][j];
			cout <<A[i][j]<<" ";
		
		}
	cout << "\n";
//	cout << "suma= " << sum;
	}
}
