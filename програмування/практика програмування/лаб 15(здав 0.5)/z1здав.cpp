#include <iostream>
#include <string.h>


using namespace std;
	const int n=4; //������� �������� 
	struct stud {
		char fio[25];
		int mat,pro,os,alg;	
		}ved[n];
		


int main() {
	setlocale(LC_ALL,"ukr");

	int i;
	int pov_mat = 0,pov_pro = 0,pov_os = 0,pov_alg = 0;
	
	

	for (i = 0; i<n; i++ ){
		cout << "������ ���������� ��� "<<i+1<<" ��������\n";
		cout<<"������ �������\n";
		cin>>ved[i].fio;
		cout<<"������ � ���������� ������������� �� �������\n";
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
     cout << "� � �"<<" ������� "<<"\t"<<"� ���.����� � "<<"\t"<<" ������������ "<<"� �� �"<<"\t"<<" ������� �� �������� �";
     cout<<endl;
   	for (i = 0; i<n; i++){
  	cout <<"  "<< i+1 <<"    "<<ved[i].fio<<"\t\t"<< ved[i].mat<<"\t\t"<<ved[i].pro<<"\t"<<ved[i].os<<"\t\t"<<ved[i].alg<<"\n";
	}
	



		if (pov_mat > pov_pro && pov_mat > pov_os && pov_mat > pov_alg )
				cout << "�������� ���������� ������ � ��� ������!"<<endl;
		if (pov_pro > pov_mat && pov_pro > pov_os && pov_pro > pov_alg )
				cout << "�������� ���������� ������ � �������������!"<<endl;
		if (pov_os > pov_mat && pov_os > pov_pro && pov_os > pov_alg )
				cout << "�������� ���������� ������ � OC!"<<endl;
		if (pov_alg > pov_mat && pov_alg > pov_pro && pov_mat > pov_os )
				cout << "�������� ���������� ������ � ������!"<<endl;
	
	
	

}
		
		
			



