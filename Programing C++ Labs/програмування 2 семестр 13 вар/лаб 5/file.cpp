#include <iostream>
#include <conio.h>
#include <time.h>
#include <math.h>
#include <string>
#include <Windows.h>
#include <unistd.h>

using namespace std;

void do_sleep(clock_t wait){
	clock_t goal;
	goal = wait + clock();
	while (goal > clock())
	;
}
void download (){
	cout << "Завантаження";
 
    for (int i; i<1; i++) {
        sleep(1);
        cout << "." << flush;
        sleep(1);
        cout << "." << flush;
        sleep(1);
        cout << "." << flush;
        
    }
cout<<endl;
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
			cout << "Введіть розмір матриці ";
			cout <<endl;

			cout << "Введіть кількість стовпців: ";
			cin >> n;

			cout << "Введіть кількість рядків: ";
			cin >> m;
			
			cout << "-------------------------------\n" ;
			download();
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
 cout << "\nВизначник матриці: " << name.v;
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
		   ;
 }
  cout << "-------------------------------\n";
  
  //одновимырний масив 
 	int *odn_mas = new int [n*m];
		int len = 0;

		for (int i = 0; i<n; i++){
			
			for (int j = 0; j<m; j++){
			odn_mas[len++] = a[i][j];	

			}

		}
		for (int i = 0; i<len; i++){
			cout << odn_mas[i]<<" ";
		}

			

	}
	

	
	

   
   
int main ()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
 	

	matrix opa;
	opa.sho();


	
}






