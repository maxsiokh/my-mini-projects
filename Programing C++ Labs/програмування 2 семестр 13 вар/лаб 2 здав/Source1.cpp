#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Numbers {

	public:
		int num;
		
		Numbers(int i)
		{
			num = i;
				
		}
		
		void show(char x)
		{
			if (x == '+')
				cout << "Sum = " << num << endl;
			else 
				cout << "Subtraction = " << num << endl;
		}
		
		
		
};


Numbers operator +(Numbers ch1, Numbers ch2)
{
	return Numbers(ch1.num + ch2.num);
}
Numbers operator -(Numbers ch1, Numbers ch2)
{
	return Numbers(ch1.num - ch2.num);
}

int main() {
	
	
	int num1, num2;
	cout << "Enter 1 number  ";
	cin >> num1;
	if (num1 > 0){
		cout << "wrong num, enter new - num: ";
		cin >> num1;
	}
	Numbers ch1(num1);
	
	
	cout << "Enter 2 number  ";
	cin >> num2;
	if (num2 > 0){
		cout << "wrong num, enter new - num: ";
		cin >> num2;
	}
	Numbers ch2(num2);
	
	Numbers result = ch1 + ch2;
	
	result.show('+');
	
	cout <<endl;
	
	result = ch1 - ch2;
	result.show('-');
	
	cout <<endl;
	
	
	
	
}
