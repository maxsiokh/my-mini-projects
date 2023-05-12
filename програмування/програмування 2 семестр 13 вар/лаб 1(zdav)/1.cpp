#include <iostream>
#include <math.h>
#include <time.h>
#include <algorithm>

using namespace std;

void do_sleep(clock_t wait){
	clock_t goal;
	goal = wait + clock();
	while (goal > clock())
	;
}
const long num_loops = 600000000L;
int main()

{
	setlocale(LC_ALL,"");
	int length;
	float temp; 
	int a;
	
	long  i = num_loops;
	clock_t start,finish;
	double duration;
	
	cout << "�������� �� ��� �������\n";
	do_sleep( (clock_t)3 * CLOCKS_PER_SEC );
	cout <<( "������!\n" );
	

	//����� ������
	int *mas = new int[length]; 
 	cout << "������ ����� ������: " <<endl;
	cin>>length;
	//	���� ������

	for (int i = 0; i<length; i++){
		cout <<"mas["<<i<<"]=";
		cin>>mas[i];
	}


    // ���������� �������  1
	start = clock();
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (mas[j] > mas[j + 1]) {
                temp = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = temp;
            }
        }
    }
	finish = clock();
	cout << "���������� 1"<<endl;
	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	cout << "\nTime: " << (finish - start)  << endl;
	
	// ����� ������������� ������
	for (int i = 0; i < length; i++) {
    
        cout << mas[i] << " ";
    }
    
  // ���������� �������  2
	start = clock();
	int Min = 999, index = -1, count = 0;
	for (int i = 0; i <length - 1; ++i){
		for (int j = i; j<length; ++j)
		{
			if (Min> mas[j]) {
			Min = mas[j];
			index = j;
			}
		}
	swap(mas[i], mas[index]);
	count ++;
	Min = 999;
	}
	cout << endl;
	finish = clock();
	
	cout << "���������� 2"<<endl;
	
    cout << endl;
	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	cout << "\nTime: " << (finish - start)  << endl;
	
	cout << endl;
	
// ����� ������������� ������
	
    for (int i = 0; i < length; i++) {
    	
        cout << mas[i] << " ";
    }
   
    cout << endl;

	
    delete[] mas;
    return 0;
}
