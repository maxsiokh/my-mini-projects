#include <iostream>

#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"");
	float suma=0;
	
	int length;

	int *arr = new int[length];
	cout << "������ ����� ������: " <<endl;
	cin>>length;
	for (int i = 0; i<length; i++){
		cout <<"arr["<<i<<"]=";
		cin>>arr[i];
	}
	for (int i = 0; i<length; i++)
	  {
	    if (arr[i]>0) 
	      suma += arr[i];
	  }
	  cout << "���� ��� ������� ��������: " << suma;
	  
	delete[] arr;
	
	return 0;
}

