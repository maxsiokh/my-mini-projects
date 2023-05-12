#include <iostream>
#include <fstream>

using namespace std;

 
int main(){	
	setlocale(LC_ALL,"");
// масив на 100 чисел =====================
	int n = 100; 
	int *a = new int[n + 1];

	for (int i = 0; i <= n; i++)
		a[i] = i;
	
//	запис файлу g.txt =========================

	cout << "Запис файлу g.txt\n\n";
	ofstream gout ("g.txt");
	
	if (!gout.is_open())
		cout<<"Файл g.txt не записався !\n\n";
	else {
		cout << "Файл g.txt відкрито!\n\n";
		for (int i = 0; i<n; i++){
			gout << a[i]<<" ";
		}
	}



	gout.close();
	
	
	
//читання файлу=========================== 
	cout << "\n\nЧитання файлу g.txt \n\n";
	ifstream gin ("g.txt");
	if (!gin)cout << "Файл g.txt не відкрився!\n";
	else {
		cout << "Файл g.txt відкрито!\n\n";
		for (int i=0; i<n; i++)
		gin >> a[i];
		}	
		gin.close();
	
	
	
//	вівід масиву =============================
	cout << "\nМасив на сто числел : ";
	for (int i = 0; i<n; i++){
		cout << a[i]<<" ";
	}
	
//	запис файлу f.txt =========================
	cout <<"\n\n\n";
	cout << "Запис файлу f.txt\n\n";
	ofstream fout ("f.txt");
	
	if (!fout.is_open())
		cout<<"Файл f.txt не записався !\n\n";
	else {
		cout << "Файл f.txt відкрито!\n\n";
		for (int i = 2; i * i <= n; i++){
		 if (a[i])
		 for (int j = i*i; j <= n; j += i){
		 	a[j] = 0;
		 }
		 
		 }
		 
		 for (int i = 2; i < n; i++){
		 if (a[i])
		 {
		 fout << a[i] << ' '; 
		 } 
		 } 
		 cout << "Файл записано!\n\n";
	}
	fout.close();
	
	//читання файлу=========================== 
	char resh;
	cout << "\n\nЧитання файлу f.txt \n\n";
	ifstream fin ("f.txt");
	if (!fin)cout << "Файл f.txt не відкрився!\n";
	else {
		cout << "Файл f.txt відкрито!\n\n";
		while(!fin.eof()){
		fin.get(resh);
		cout<<resh;
	}	
		fin.close();
		delete[] a;
}
}
