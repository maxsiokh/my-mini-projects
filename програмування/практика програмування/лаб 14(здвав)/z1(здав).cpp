#include <iostream>
#include <math.h>
#include <conio.h> 
#include <stdio.h>

using namespace std;

int main() {
	setlocale(LC_ALL,"");
    int j,i;
    float s1,s2;
    int n , m ;// n- строки, m- колонки
    
	cout << "Введіть розмір матриці: ";
    cin >> n;
    cin >> m;
 	
// 	виділення пам'яті
    float **B = new  float*[n];
    
	float **A= new  float*[m];
	
	
    
	for(i=0; i<m;i++)A[i]=new float [n];
	
	
	
	
//	введення матриці
	for(i=0;i<m;i++){
		for (j=0;j<n;j++){
		
		cout<<"A["<<i+1<<","<<j+1<<"]=";
		cin >> A[i][j];
		cout<< endl;
	}
}
//виведення матриці

	for(i=0;i<m;i++){
		for (j=0;j<n;j++){
		cout << A[i][j]<<" ";

		
	}
	cout<<endl;
	}
	
	
	int d = 0; //d - diagonal

	for (int i = 0; i < n; i++){
        d+=A[i][i];
	
    }
    
    cout << "сума головної діагоналі: "<< d;
    
    
    // 	виділення пам'яті для нової матриці
    float **C = new  float*[n];
    
	float **D= new  float*[m];
	
	for(i=0; i<m;i++)D[i]=new float [n];
	
//	заповнення нової матриці
    for(i=0;i<m;i++){
    	
		for (j=0;j<n;j++){
			D[i][j] = A[i][j]/d;
		
		
	}
	cout<< endl;
}
//	введення матриці нової матриці
    for(i=0;i<m;i++){
		for (j=0;j<n;j++){
		cout << D[i][j]<<" ";

		
	}
	cout<<endl;
	}
    
    
    for (int i = 0; i < n; i++) {
    	delete [ ] A[i];
		delete [ ]B;
	}
	for (int i = 0; i < n; i++) {
    	delete [ ] D[i];
		delete [ ]C;
	}
    return 0;
}

