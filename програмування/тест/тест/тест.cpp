#include <iostream>
#include <math.h>
#include <conio.h> 
#include <stdio.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int j, i;
	float s1, s2;
	int n, m;// n- ñòðîêè, m- êîëîíêè

	cout << "Введіть розмір матриці: ";
	cin >> n;
	cin >> m;

	// 	âèä³ëåííÿ ïàì'ÿò³
	float** B = new  float* [n];

	float** A = new  float* [m];



	for (i = 0; i < m; i++)A[i] = new float[n];




	//	ââåäåííÿ ìàòðèö³
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {

			cout << "A[" << i + 1 << "," << j + 1 << "]=";
			cin >> A[i][j];
			cout << endl;
		}
	}
	//âèâåäåííÿ ìàòðèö³

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cout << A[i][j] << " ";


		}
		cout << endl;
	}


	int d = 0; //d - diagonal

	for (int i = 0; i < n; i++) {
		d += A[i][i];

	}

	cout << "ñóìà ãîëîâíî¿ ä³àãîíàë³: " << d;


	// 	âèä³ëåííÿ ïàì'ÿò³ äëÿ íîâî¿ ìàòðèö³
	float** C = new  float* [n];

	float** D = new  float* [m];

	for (i = 0; i < m; i++)D[i] = new float[n];

	//	çàïîâíåííÿ íîâî¿ ìàòðèö³
	for (i = 0; i < m; i++) {

		for (j = 0; j < n; j++) {
			D[i][j] = A[i][j] / d;


		}
		cout << endl;
	}
	//	ââåäåííÿ ìàòðèö³ íîâî¿ ìàòðèö³
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cout << D[i][j] << " ";


		}
		cout << endl;
	}


	for (int i = 0; i < n; i++) {
		delete[] A[i];
		delete[]B;
	}
	for (int i = 0; i < n; i++) {
		delete[] D[i];
		delete[]C;
	}
	return 0;
}
