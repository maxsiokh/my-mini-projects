#include <iostream>
#include <string.h>
#include <fstream>

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
	
	
	ofstream fout ("stud.txt");
	if (!fout ) cout<< " Cannot open file!"<<endl;
	
	
	fout  <<" ������� "<<"\t"<<"� ���.����� � "<<"\t"<<" ������������ "<<"� �� �"<<"\t"<<" ������� �� �������� �"<<endl;
	
	for (i = 0; i<n; i++ ){
		cout << "������ ���������� ��� "<<i+1<<" ��������\n";
		cout<<"������ �������\n";
		cin>>ved[i].fio;
		fout << ved[i].fio << "\t\t\t";
		
		cout<<"������ � ���������� ������������� �� �������\n";
		cin >> ved[i].mat;
		fout << ved[i].mat << "\t\t\t";
	 	if(ved[i].mat == 3){
	 		pov_mat ++;
		 }
		 
		cin >> ved[i].pro;
		fout << ved[i].pro << "\t\t";
		if(ved[i].pro == 3){
	 		pov_pro ++;
		 }
		 
		cin >> ved[i].os;
		fout << ved[i].os << "\t\t\t";
		if(ved[i].os == 3){
	 		pov_os ++;
		 }
		 
		cin >> ved[i].alg;
		fout << ved[i].alg << "\n";
		if(ved[i].alg == 3){
	 		pov_alg ++;
		 }
     }
    fout.close();

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
		
		
			



