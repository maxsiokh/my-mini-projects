#include <iostream>

#include <math.h>

using namespace std;

int main()
{
	int n;
	int max, i_max;
	float Z[n];
	cout << "number of workers: ";
	cin >> n;
	
	for (int i=0; i<n; i++)
	{
		cout << i << " worker's salary: ";
		cin >> Z[i];
	}
	max=Z[0];
	i_max= 0;
	for (int i=1; i<n; i++)
		if (Z[i]>max)
	{
		max=Z[i];
		i_max=i;		
	}

	cout << "the highest salary in a worker "<<i_max;
}
