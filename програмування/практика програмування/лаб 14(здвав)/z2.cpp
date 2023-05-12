
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int m,n;
	float sum=0;

	
	cout << "Введіть розмір матриці: ";
    cin >> n;
    cin >> m;
 	
// 	виділення пам'яті
    float **B = new  float*[n];
    
	float **A= new  float*[m];
    
	for(int i=0; i<m;i++)A[i]=new float [n];
	
	
//    ввод масива
   for(int i=0;i<m;i++){
		for (int j=0;j<n;j++){
		
		cout<<"A["<<i+1<<","<<j+1<<"]=";
		cin >> A[i][j];
		cout<< endl;
	}
}
//вивод масива
	for (int i=0; i<n; i++)
		{
			for (int j=0; j<n; j++)
				cout<<A[i][j]<<" ";
				cout<<endl;
		}
//	сума
    for (int i = 0; i < n; i++){
    	
      for (int j = 0; j < m; j++){

        sum =sum + A[i][j];
        
		
    	
      }
   	cout <<"сума   " <<i+1<<"  рядка :"<<sum<<endl;
	sum = 0;
      }
      cout<<endl;
//      длбуток
    int D;
	D=1;

	for (int i = 0; i < n; i++) {
		
		for ( int j = 0; j < m; j++ ){
			D*=A[i][j];
			
		}
	cout <<"Добуток   " <<i+1<<"  рядка :"<<D<<endl;
	D = 1;
	}
    
    
    
      for (int i = 0; i < n; i++) {
    	delete [ ] A[i];
		delete [ ]B;
	}
	return 0;
}
