#include <iostream>

#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"");
	float suma=0;
	int n;
	float B[n];
	
	cout << "¬вед≥ть розм≥р масиву: " <<endl;
	cin>>n;
	for (int i = 0; i<n; i++){
		cout <<"B["<<i<<"]=";
		cin>>B[i];
	}
	for (int i = 0; i<n; i++)
	  {
	    if (B[i]>0) 
	      suma += B[i];
	  }
	  cout << "—ума вс≥х додатн≥х елемент≥в: " << suma;
	return 0;
}

