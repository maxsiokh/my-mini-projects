#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;
int pov_mat = 0,pov_pro = 0,pov_os = 0,pov_alg = 0;
class stud {
	private:

		int mat,pro,os,alg;	
	public:
		string name;
		
		void rating (){
			
		int mat_o, pro_o, os_o,  alg_o;
			cout <<"Введіть ім'я студента: ";
			cin >> name;
			cout<<"Оцінки з математики програмування ос алгебри\n";
			
			cin >> mat_o;
			mat = mat_o;
			if (mat_o == 3)
				pov_mat++;
				
			cin >> pro_o;	
			pro = pro_o;
			if (pro_o == 3)
				pov_pro++;
				
			cin >> os_o;
			os = os_o;
			if (os_o == 3)
				pov_os++;
				
			cin >> alg_o;	
			alg = alg_o;
			if (alg_o == 3)
				pov_alg++;
			
		}
		void get (){
			
			cout <<name<<"\t\t"<< mat<<"\t"<<pro<<"\t\t"<<os<<"\t\t"<<alg<<"\n";
		}

};


int main() {
	setlocale(LC_ALL,"ukr");

	stud first;
	first.name ;
	first.rating();
	

	
	stud second;
	second.name ;
	second.rating();
	

	
	stud third;
	third.name ;
	third.rating();
	

	
	stud fourth;
	fourth.name ;
	fourth.rating();


	
	
	cout <<"Прізвище "<<" Мат.аналіз "<<" Програмуваня "<<"    ОС    "<<" Алгебра та геометрія "<<endl;
	first.get();
	second.get();
	third.get();
	fourth.get();
	
	
	cout<<endl;
	

		if (pov_mat > pov_pro && pov_mat > pov_os && pov_mat > pov_alg )
				cout << "Найбільше задовільних оцінок з мат аналізу!"<<endl;
		if (pov_pro > pov_mat && pov_pro > pov_os && pov_pro > pov_alg )
				cout << "Найбільше задовільних оцінок з програмування!"<<endl;
		if (pov_os > pov_mat && pov_os > pov_pro && pov_os > pov_alg )
				cout << "Найбільше задовільних оцінок з OC!"<<endl;
		if (pov_alg > pov_mat && pov_alg > pov_pro && pov_mat > pov_os )
				cout << "Найбільше задовільних оцінок з aлгебри!"<<endl;
	
}
		
