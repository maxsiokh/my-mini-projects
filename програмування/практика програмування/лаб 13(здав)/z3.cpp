#include <iostream>
using namespace std;
 
int main()
{
	setlocale(LC_ALL,"");
   	float ser,suma=0;
	int n;
    int length;    
    int *mas = new int[length];
	//����� ������
	
 	cout << "������ ����� ������: " <<endl;
	cin>>length;
	 
//	 ���� ������
    for (int i = 0; i < length; i++) {
        cout << "mas[" << i << "] = ";
        cin >> mas[i];
    }
    
    
    for (int i = 0; i<length; i++)
	  {
	    if (mas[i]>0) 
	       suma += mas[i];
	       n=i;

	  }
	
	ser= suma/n;
	cout << "ser: " << ser;
	
	delete[] mas;
	return 0;
}
    
