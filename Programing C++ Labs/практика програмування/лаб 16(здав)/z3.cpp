#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>

using namespace std;

void vivod (){
	char a;
	cout << "\n\n������� ����� \n\n";
	ifstream fin ("T.txt");
	if (!fin)cout << "���� �� ��������!\n";
	else {
		cout << "���� �������!\n\n";
		while(!fin.eof()){
		fin.get(a);
		cout<<a;
	}	
		fin.close();
	}
}

const int n = 10;
struct tovar{
	char name[10];
	char cost[10];
	char kil[10];
	char date [10];
	char date_storage [10];
}tov[n];
int main (){
	setlocale(LC_ALL,"ukr");
	int i,p;

	bool t;
	tovar spis;
	
	
	cout << "����� ����� T.txt\n\n"; // ���������� ��� ����������
	ofstream fout ("T.txt");
	
	if (!fout.is_open())
		cout<<"���� T.txt �� ��������� !\n\n";
	else {
		cout << "���� T.txt �������!\n\n";	
		for (int i = 0; i<2; i++){
			cout << "������ ����� "<<i+1<<" ������: ";
			cin >> tov[i].name;
			cout << "������ ���� "<<i+1<<" ������: ";
			cin >> tov[i].cost;
			cout <<"������ ������� "<<i+1<<" ������: ";
			cin >> tov[i].kil;
			cout << "������ ���� ������������ "<<i+1<<" ������: ";
			cin >> tov[i].date;
			cout << "������ ���� ���������� "<<i+1<<" ������: ";
			cin >> tov[i].date_storage;
			fout << "�����: " <<tov[i].name << "\t ֳ��(���): " << tov[i].cost <<" ʳ������: "<<tov[i].kil<< "\t ���� ������������: " <<tov[i].date << "\t����� ����������(����� ��): "<< tov[i].date_storage << endl;
		}
	}
	fout.close();
	

	cout << "--------- �������� ���-[1]  ---------  �������� �����-[2] --------- \n";
	cin>>p;
	if (p==1){

		ofstream del ("T.txt", ios::trunc);
	}

	else if (p=2){
		int k;
		cout<<"������ ������ ������ �� ������ ��������: ";
		cin>>k;
		ofstream app ;
		app.open("T.txt",ios::app);
		for (int i = 0; i<k; i++){
			cout << "������ ����� "<<k+1<<" ������: ";
			cin >> tov[i].name;
			cout << "������ ���� "<<k+1<<" ������: ";
			cin >> tov[i].cost;
			cout <<"������ ������� "<<k+1<<" ������: ";
			cin >> tov[i].kil;
			cout << "������ ���� ������������ "<<k+1<<" ������: ";
			cin >> tov[i].date;
			cout << "������ ���� ���������� "<<k+1<<" ������: ";
			cin >> tov[i].date_storage;
			app << "�����: " <<tov[i].name << "\t ֳ��(���): " << tov[i].cost <<" ʳ������: "<<tov[i].kil<< "\t ���� ������������: " <<tov[i].date << "\t����� ����������(����� ��): "<< tov[i].date_storage << endl;
		}
		app.close();
	}
	
	vivod();
}

//	cout << "������ �������� ���� ������:  ";
//	cin >> p;
//	for (int i = 0; i<2; i++){
//		if (spis[i].cost < p)
//		while (in>>spis.name>>spis.cost>>spis.date<<spis.date_storage){
//		cout << "�����: " <<spis[i].name << "\t ֳ��(���): " << spis[i].cost << "\t ���� ������������: " <<spis[i].date << "\t����� ����������(����� ��): "<< spis[i].date_storage << endl;
//	}
//	}
//	

