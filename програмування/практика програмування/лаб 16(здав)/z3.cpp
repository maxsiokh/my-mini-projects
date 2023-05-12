#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>

using namespace std;

void vivod (){
	char a;
	cout << "\n\nЧитання файлу \n\n";
	ifstream fin ("T.txt");
	if (!fin)cout << "Файл не відкрився!\n";
	else {
		cout << "Файл відкрито!\n\n";
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
	
	
	cout << "Запис файлу T.txt\n\n"; // інформація про продтовари
	ofstream fout ("T.txt");
	
	if (!fout.is_open())
		cout<<"Файл T.txt не записався !\n\n";
	else {
		cout << "Файл T.txt відкрито!\n\n";	
		for (int i = 0; i<2; i++){
			cout << "Введіть назву "<<i+1<<" товару: ";
			cin >> tov[i].name;
			cout << "Введіть ціну "<<i+1<<" товару: ";
			cin >> tov[i].cost;
			cout <<"Введіть кількість "<<i+1<<" товару: ";
			cin >> tov[i].kil;
			cout << "Введіть дату виготовлення "<<i+1<<" товару: ";
			cin >> tov[i].date;
			cout << "Введіть дату придатності "<<i+1<<" товару: ";
			cin >> tov[i].date_storage;
			fout << "Назва: " <<tov[i].name << "\t Ціна(грн): " << tov[i].cost <<" Кількість: "<<tov[i].kil<< "\t Дата виготовлення: " <<tov[i].date << "\tТермін придатності(вжити до): "<< tov[i].date_storage << endl;
		}
	}
	fout.close();
	

	cout << "--------- Видалити все-[1]  ---------  Добавити товар-[2] --------- \n";
	cin>>p;
	if (p==1){

		ofstream del ("T.txt", ios::trunc);
	}

	else if (p=2){
		int k;
		cout<<"Введіть кількісь товарів які хочете добавити: ";
		cin>>k;
		ofstream app ;
		app.open("T.txt",ios::app);
		for (int i = 0; i<k; i++){
			cout << "Введіть назву "<<k+1<<" товару: ";
			cin >> tov[i].name;
			cout << "Введіть ціну "<<k+1<<" товару: ";
			cin >> tov[i].cost;
			cout <<"Введіть кількість "<<k+1<<" товару: ";
			cin >> tov[i].kil;
			cout << "Введіть дату виготовлення "<<k+1<<" товару: ";
			cin >> tov[i].date;
			cout << "Введіть дату придатності "<<k+1<<" товару: ";
			cin >> tov[i].date_storage;
			app << "Назва: " <<tov[i].name << "\t Ціна(грн): " << tov[i].cost <<" Кількість: "<<tov[i].kil<< "\t Дата виготовлення: " <<tov[i].date << "\tТермін придатності(вжити до): "<< tov[i].date_storage << endl;
		}
		app.close();
	}
	
	vivod();
}

//	cout << "Введіть мінімальну ціну товару:  ";
//	cin >> p;
//	for (int i = 0; i<2; i++){
//		if (spis[i].cost < p)
//		while (in>>spis.name>>spis.cost>>spis.date<<spis.date_storage){
//		cout << "Назва: " <<spis[i].name << "\t Ціна(грн): " << spis[i].cost << "\t Дата виготовлення: " <<spis[i].date << "\tТермін придатності(вжити до): "<< spis[i].date_storage << endl;
//	}
//	}
//	

