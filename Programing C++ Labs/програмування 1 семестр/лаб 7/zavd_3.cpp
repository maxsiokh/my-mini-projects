#include <iostream>
using namespace std;
 
int main()
{
	setlocale(LC_ALL,"");
   	float ser,suma=0;
   	int n;
    int size ;
    int mas[size];    
    
	//����� ������
 	cout << "������ ����� ������: " <<endl;
	cin>>size;
	 
//	 ���� ������
    for (int i = 0; i < size; i++) {
        cout << "mas[" << i << "] = ";
        cin >> mas[i];
    }
    
    
    for (int i = 0; i<size; i++)
	  {
	    if (mas[i]>0) 
	       suma += mas[i];
	       n=i;

	  }
	
	ser= suma/n;

	cout << "ser: " << ser;
	
	return 0;
}
    
