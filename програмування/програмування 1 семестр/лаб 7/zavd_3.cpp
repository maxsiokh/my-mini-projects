#include <iostream>
using namespace std;
 
int main()
{
	setlocale(LC_ALL,"");
   	float ser,suma=0;
   	int n;
    int size ;
    int mas[size];    
    
	//розм≥р масива
 	cout << "¬вед≥ть розм≥р масиву: " <<endl;
	cin>>size;
	 
//	 ввод масива
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
    
