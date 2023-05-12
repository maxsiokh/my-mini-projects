#include <iostream>
#include <math.h>
#include <time.h>

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
	start = clock();
	for (int i = 0; i<length; i++){
		cout <<"mas["<<i<<"]=";
		cin>>mas[i];
	}
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	cout << "\nTime: " << (finish - start) / 1000.0 << endl;

    // Сортировка массива 
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
	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	cout << "\nTime: " << (finish - start) / 1000.0 << endl;
	

// вивод відсортованого масиву
	start = clock();
    for (int i = 0; i < length; i++) {
        cout << mas[i] << " ";
    }
    finish = clock();
    cout << endl;
	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	cout << "\nTime: " << (finish - start) / 1000.0 << endl;
	
	
	
	
    delete[] mas;
    return 0;
}
