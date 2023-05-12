#include <iostream>
#include <string.h>

using namespace std;

class person{

	public:
		string name_surname;
		int age;
		void output(){
			cout << name_surname<<"\t age: "<<age<<"\t";
			if (age < 18){
				cout << "÷€ людина не повнол≥тн€"<<endl;
			};
			if (age > 17){
				cout << "÷€ людина повнол≥тн€"<<endl;
			}
			
			
		}
};



int main (){
	setlocale(LC_ALL,"ukr");
	person max;
	max.name_surname = "Max Siokh";
	max.age = 17;
	max.output();
	
	
	person petro;
	petro.name_surname = "Petro Petrenko";
	petro.age = 18;
	petro.output();
	
	person viktor;
	viktor.name_surname = "Viktor Matviychyk";
	viktor.age = 20;
	viktor.output();
	
	return 0;
}
