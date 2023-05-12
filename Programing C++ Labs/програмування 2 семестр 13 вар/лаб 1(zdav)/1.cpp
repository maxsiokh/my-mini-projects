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
	
	cout << "Затримка на три секунди\n";
	do_sleep( (clock_t)3 * CLOCKS_PER_SEC );
	cout <<( "Готово!\n" );
	

	//розмір масива
	int *mas = new int[length]; 
 	cout << "Введіть розмір масиву: " <<endl;
	cin>>length;
	//	ввод масива

	for (int i = 0; i<length; i++){
		cout <<"mas["<<i<<"]=";
		cin>>mas[i];
	}


    // Сортировка массива  1
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
	cout << "Сортування 1"<<endl;
	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	cout << "\nTime: " << (finish - start)  << endl;
	
	// вивод відсортованого масиву
	for (int i = 0; i < length; i++) {
    
        cout << mas[i] << " ";
    }
    
  // Сортировка массива  2
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
	
	cout << "Сортування 2"<<endl;
	
    cout << endl;
	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	cout << "\nTime: " << (finish - start)  << endl;
	
	cout << endl;
	
// вивод відсортованого масиву
	
    for (int i = 0; i < length; i++) {
    	
        cout << mas[i] << " ";
    }
   
    cout << endl;

	
    delete[] mas;
    return 0;
}
