#include <iostream>
using namespace std;
int main (){
	setlocale(LC_ALL,"ukr");
	
	char *str = "as12df sdfse 3 2eee4ew w37wer2fgj9dl.";
	char *p = str;
	do
    {
        if (*p > 47 && *p < 58) cout << *p;
        ++p;
    } while (*p != '.');
    
    cout << endl;
    
    p = str;
    do
    {
        if (*p <= 47 || *p >= 58) cout << *p;
        ++p;
    } while (*p != '.');
    cout << *p << endl;
   return 0;
}
