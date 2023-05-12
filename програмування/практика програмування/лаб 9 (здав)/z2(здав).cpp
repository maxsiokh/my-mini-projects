#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	int T[2][2][3] = {{{1,2,3},{1,2,3}},{{1,2,3},{1,2,3}}};
	int E[2][2][3] = {{{1,2,3},{1,2,3}},{{1,2,3},{1,2,3}}};
	int P [2][2][3];
	for (int i=0;i<2; i++ ){
			for (int j=0; j<2; j++ ){
					for (int k=0;k<3; k++ ){
						
						P[i][j][k]= E[i][j][k]+T[i][j][k];
						cout << P[i][j][k]<<"\t";
						cout<<endl;
				}
			}	
	}
}
