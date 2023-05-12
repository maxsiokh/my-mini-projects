#include <iostream>
#include <cmath>   
using namespace std;

int main() {


	int max = 0;
	int n,m;
	setlocale(LC_ALL, "");
	
	cout<< " Введіть розмір матриці: ""\n";
	cin>>n>>m;
	
	
	// 	виділення пам'яті
	float **d = new  float*[n];
    
	float **a= new  float*[m];
	
	for(int i=0; i<m;i++)a[i]=new float [n];
	
	
	
	cout<< " Заповніть матрицію: ""\n";
	for (int i=0; i<n; i++)
	{
	for (int j=0; j<n; j++)
	{
	cout<<"massiv["<<i<<"]["<<j<<"] = ";
	 cin>>a[i][j];
	}
	}

	for (int i=0; i<n; i++)
	{
	for (int j=0; j<n; j++)
	cout<<a[i][j]<<" ";
	cout<<endl;
	}
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; j++){
			if (a[i][j] > max) {
            	max = a[i][j];
            
		}
        
        }
    }
    

	cout<<endl;
	// 	виділення пам'яті для нової матриці
	float **c = new  float*[n];
    
	float **b= new  float*[m];
	
	for(int  i=0; i<m;i++)b[i]=new float [n];
	
	
	
	
	for (int i=0; i<n; i++)
	{
	for (int j=0; j<n; j++)
		b[i][j]=a[i][j]/fabs(max);
	}

	
	for (int i=0; i<n; i++)
	{
	for (int j=0; j<n; j++)
		cout<<b[i][j]<<" ";
		cout<<endl;
	}
	
	
	
	
   for (int i = 0; i < n; i++) {
    	delete [ ] a[i];
		delete [ ]d;
	}
	
	for (int i = 0; i < n; i++) {
    	delete [ ] b[i];
		delete [ ]c;
	}
	return 0;
}
