#include <iostream>
#include <math.h>

using namespace std;
int main()

{
	setlocale(LC_ALL,"");
	int n;
	float mas[n];
	float temp; 
	//����� ������
 	cout << "������ ����� ������: " <<endl;
	cin>>n;
	//	���� ������
	for (int i = 0; i<n; i++){
		cout <<"mas["<<i<<"]=";
		cin>>mas[i];
	}
    // ���������� ������� 
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (mas[j] > mas[j + 1]) {
                temp = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = temp;
            }
        }
    }
// ����� ������������� ������
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
    
    return 0;
}
