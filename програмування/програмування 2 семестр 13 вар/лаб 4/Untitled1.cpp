#include <iostream>
#include <conio.h>
#include <time.h>
#include <math.h>
#include <string>
#include <Windows.h>

using namespace std;

void do_sleep(clock_t wait){
	clock_t goal;
	goal = wait + clock();
	while (goal > clock())
	;
}
class matrix {
	public:
		int n;
		int m;
		int** a;
		float v = 0;
		
		

		void sho();
		friend void viznach(matrix name);
		
		matrix(){
			cout << "¬вед≥ть розм≥р матриц≥ ";
			cout <<endl;

			cout << "¬вед≥ть к≥льк≥сть стовпц≥в: ";
			cin >> n;

			cout << "¬вед≥ть к≥льк≥сть р€дк≥в: ";
			cin >> m;
			
			cout << "-------------------------------\n" ;
			do_sleep( (clock_t)1 * CLOCKS_PER_SEC );
			
			
			
			this->a = new int*[this->n];
				for (int i = 0; i < n; ++i) {
		 		   this->a[i] = new int[m];
  				}	
		}
		~matrix() {

		  for (int i = 0; i < n; ++i) {
		   delete[] this->a[i];
		  }
		  delete[] this->a;
		 
 }
 void viznach(matrix name){
		for (int i = 0; i < n; i++)
  name.v = name.v + (name.a[0][i] * (name.a[1][(i + 1) % n] * name.a[2][(i + 2) % n] - name.a[1][(i + 2) % n] * name.a[2][(i + 1) % n]));
 cout << "\n¬изначник матриц≥: " << name.v;
	}
 
 
		
  		
	};
	
	void matrix::sho(){
		for (int i = 0; i < n; i++) {
		  for (int j = 0; j < m; j++) {
		   cout <<" [" << i + 1 << "][" << j + 1 << "] = ";
		   cin >>a[i][j];

		   cout << endl;
		  }
		 }
		 for (int i = 0; i < n; i++) {
		  for (int j = 0; j < m; j++) {
		   cout << a[i][j] << "  ";
		    
		  }
		  cout << endl;
		  
 }
 cout << "-------------------------------\n" ;
	}
	

	
	

   
   
int main ()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
 	

	matrix opa;
	opa.sho();
	opa.viznach(opa);

	
}






