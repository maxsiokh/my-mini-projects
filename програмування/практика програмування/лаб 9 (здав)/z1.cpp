#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	
	float Matrix[3][4];
	int i,j;

	//заповняєм масив
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			if(i==0)
				cout << "Місячне сальдо" << j + 1 << " за січень : ";
			else if (i==1)
				cout << "Місячне сальдо" << j + 1 << " за лютий : ";
			else if (i==2)
				cout << "Місячне сальдо" << j + 1 << " за березень : ";
			else if (i==3)
				cout << "Місячне сальдо" << j + 1 << " за квітень : ";
		cin>>Matrix[i][j];
		}
	}
	cout << "Січень"<<"  "<<"Лютий"<<"  "<<"Березень"<<"  "<<"Квітень"<<endl;
			for (int i = 0; i<3; i++){
		
			for(int j = 0; j<4; j++){

			cout <<Matrix[i][j]<<"\t";
		
			}
			cout << endl;
		}
	
	
	
	//cума
	float sum = 0;
	
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += Matrix[i][j];
        }
    }
	//середнє
	float ser;
	
	ser = sum / (i*j);
	cout << "середнє арифметичне:  "<<ser<<"\n\n";
	
	
	for (int i = 0; i < 3; i++){
		for (int j=0; j < 4; j ++ ){
			if (j=2 )
				Matrix[i][j]=ser;
			if (i = 2 )
				Matrix[i][j]=ser;
			if (i = 1)
				Matrix[i][j]=ser;
			for (int i = 0; i<3; i++){
		
			for(int j = 0; j<4; j++){

			cout <<Matrix[i][j]<<"\t";
		
			}
			cout << endl;
		}
			
			return 0;
		}
	}	
	for (int i = 0; i<3; i++){
		
			for(int j = 0; j<4; j++){

			cout <<Matrix[i][j]<<"\t";
		
			}
			cout << endl;
		}



}






