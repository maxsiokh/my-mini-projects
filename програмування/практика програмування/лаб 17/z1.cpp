#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;
	
		
	void InInfo(int n); //n = кількість студентів 
	void Table (int n);
int main() {
	setlocale(LC_ALL,"ukr");
	int n;
	struct stud {
		char fio[25];
		int mat,pro,os,alg;	
		}ved[n];
	cout <<"Введіть кількість студентів: ";
	cin >> n;
	if (n > 0){
		InInfo(n);
		Table(n);
	}
	else {
		cout << "ERROR!"<<endl;
	}
}
	void InInfo(int n){ //n = кількість студентів 
	int pov_mat = 0,pov_pro = 0,pov_os = 0,pov_alg = 0;
		for (int i = 0; i<n; i++ ){
		cout << "Введіть інформацію про "<<i+1<<" студента\n";
		cout<<"Введіть прізвище\n";
		cin>>ved[i].fio;
		cout<<"Оцінки з математики програмування ос алгебри\n";
		cin >> ved[i].mat;
	 	if(ved[i].mat == 3){
	 		pov_mat ++;
		 }
		cin >> ved[i].pro;
		if(ved[i].pro == 3){
	 		pov_pro ++;
		 }
		cin >> ved[i].os;
		if(ved[i].os == 3){
	 		pov_os ++;
		 }
		cin >> ved[i].alg;
		if(ved[i].alg == 3){
	 		pov_alg ++;
		 }
     }
	}
	void Table (int n){
		int pov_mat = 0,pov_pro = 0,pov_os = 0,pov_alg = 0;
	
	    cout << "¦ № ¦"<<" Прізвище "<<"\t"<<"¦ Мат.аналіз ¦ "<<"\t"<<" Програмуваня "<<"¦ ОС ¦"<<"\t"<<" Алгебра та геометрія ¦";
	    cout<<endl;
	   	for (int i = 0; i<n; i++){
	  	cout <<"  "<< i+1 <<"    "<<ved[i].fio<<"\t\t"<< ved[i].mat<<"\t\t"<<ved[i].pro<<"\t"<<ved[i].os<<"\t\t"<<ved[i].alg<<"\n";
		}
		
		
		
	}
		
			



