#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main (){
	setlocale(LC_ALL, "ukr");
	const int n = 8;
	string I[n];
	string name[1] = "Maxim";
	
	cout<<"Введіть текстовий масив: " << endl;
	for(int i = 0; i<n; i++){
		cout <<"I["<<i<<"]=";
		cin>>I[i];
	}
	
	int maxLen = I[0].length();
	for(int i = 1; i<n;i++){
		int len = I[i].length();
		if (len > maxLen)
			maxLen = len;
	
	}
	cout<< "\n"<<endl;
	cout<<"Найбільша довжина: "<<maxLen <<"\n\n"<<endl;
	
	for (int i=0; i<n; i++){
		
	int len = I[i].length();
	if (len == maxLen)
		I[i]= name[0];
	
	}
	
	for(int i = 0; i<n; i++){
		
		cout <<"I["<<i<<"]= "<<I[i]<<endl;

	}
}

	
