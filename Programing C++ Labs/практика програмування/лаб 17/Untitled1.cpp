#include <iostream>
#include <iomanip>
#include <cstdlib>



struct student
{ char name[25];
int grades[4];
int three()
{
int sum = 0;
for (int i = 0; i < 4; i++)
{
if (grades[i] == 3)
{
sum++;
}
}
return sum;
};
student* next;
};
student* first = 0;
student* last = 0;
student* c;
void InInfo(int n);
void ShowTable(int n);
using namespace std;
int main()
{ int n;
cout << "Enter numbers students: ";
cin >> n;
if (n > 0)
{
InInfo(n);
ShowTable(n);
}
else
{
cout << "Error!" << endl;
}
return 0;
}


