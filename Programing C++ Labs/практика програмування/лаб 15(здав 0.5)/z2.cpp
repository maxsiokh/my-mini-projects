#include <iostream>
#include <string.h>

#include <locale>

using namespace std;
const int  n = 5;


struct people {
 char fio[25], adr[25];
 int bir, zarp;
 char sex;
 char marr[4];
 union {
  char war[4];
  int kids;
 };
}ved[n];

int main (){
	setlocale(LC_ALL,"ukr");
	
	
	for (int i = 0; i<n; i++ ){
		cout << "������ �������: "<< endl;
		cin >> ved[i].fio;
		cout << "������ ����������: "<< endl;
		cin >> ved[i].adr;
		cout << " ������ �����(m/w)" << endl;
  		cin >> ved[i].sex;
  		cout << "������ �� ����������:" << endl;
  		cin >> ved[i].bir;
  		cout << "������ �������� �����:" << endl;
 		cin >> ved[i].zarp;
 		
 		if (ved[i].sex == 'm') {
   			cout << "�� ��������-�����'������?  (yes/no) " << endl;
   			cin>>ved[i].war;
		}
		else {
		   cout << "�� ������?  (yes/no) " << endl;
		   cin>>ved[i].marr;
		   
		   if (ved[i].marr[0] == 'n') {
		    ved[i].kids = 0;
		           
		
		   }
		   
		   if (ved[i].marr[0] == 'y'){
		    cout << "ʳ������ ����:" << endl;
		    cin >> ved[i].kids;
		    
	  	 	}
  		}
	}
	
	cout << "� �������  �  �����  �  г� ����������  �   �������      �       �������� �����  �  ³�������-�����'������  �  ������  �  ĳ��  �" << endl;
	for (int i = 0; i < n; i++) {
	  if (ved[i].sex == 'm') {
	   cout << ved[i].fio << "\t\t" << ved[i].sex << "\t\t" << ved[i].bir << "\t\t" << ved[i].adr << "\t \t" << ved[i].zarp << "\t\t\t" << ved[i].war  << "\n";
	  }
  	  else {
  		 cout << ved[i].fio << "\t\t" << ved[i].sex << "\t\t" << ved[i].bir << "\t \t " << ved[i].adr << "\t\t" << ved[i].zarp << "\t\t" << " \t\t " << "\t\t" << ved[i].marr << "\t\t" << ved[i].kids << "\n";
  }	
}

	
	int k=0;
	for (int i = 0; i < n; i++){
		if (ved[i].sex == 'w'){
			if (k > ved[i].zarp)
				k= ved[i].zarp;
		}
			
	}
	
	
 	for (int i = 0; i < n; i++) {
  		if (ved[i].sex == 'm') {
   			if (ved[i].zarp > k*2 ){
   				cout << ved[i].zarp;
   				cout << "�������� � ��� ���� ����� �� ����� �  ";
   				cout << ved[i].fio<<endl;
			   }
			
 		 }
	}
	
}

