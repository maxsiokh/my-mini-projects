#include <iostream>
#include <fstream>

using namespace std;

 
int main(){	
	setlocale(LC_ALL,"");
// ����� �� 100 ����� =====================
	int n = 100; 
	int *a = new int[n + 1];

	for (int i = 0; i <= n; i++)
		a[i] = i;
	
//	����� ����� g.txt =========================

	cout << "����� ����� g.txt\n\n";
	ofstream gout ("g.txt");
	
	if (!gout.is_open())
		cout<<"���� g.txt �� ��������� !\n\n";
	else {
		cout << "���� g.txt �������!\n\n";
		for (int i = 0; i<n; i++){
			gout << a[i]<<" ";
		}
	}



	gout.close();
	
	
	
//������� �����=========================== 
	cout << "\n\n������� ����� g.txt \n\n";
	ifstream gin ("g.txt");
	if (!gin)cout << "���� g.txt �� ��������!\n";
	else {
		cout << "���� g.txt �������!\n\n";
		for (int i=0; i<n; i++)
		gin >> a[i];
		}	
		gin.close();
	
	
	
//	��� ������ =============================
	cout << "\n����� �� ��� ������ : ";
	for (int i = 0; i<n; i++){
		cout << a[i]<<" ";
	}
	
//	����� ����� f.txt =========================
	cout <<"\n\n\n";
	cout << "����� ����� f.txt\n\n";
	ofstream fout ("f.txt");
	
	if (!fout.is_open())
		cout<<"���� f.txt �� ��������� !\n\n";
	else {
		cout << "���� f.txt �������!\n\n";
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
		 cout << "���� ��������!\n\n";
	}
	fout.close();
	
	//������� �����=========================== 
	char resh;
	cout << "\n\n������� ����� f.txt \n\n";
	ifstream fin ("f.txt");
	if (!fin)cout << "���� f.txt �� ��������!\n";
	else {
		cout << "���� f.txt �������!\n\n";
		while(!fin.eof()){
		fin.get(resh);
		cout<<resh;
	}	
		fin.close();
		delete[] a;
}
}
