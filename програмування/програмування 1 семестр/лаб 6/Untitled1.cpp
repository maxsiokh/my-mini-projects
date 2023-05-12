#include <iostream>
using namespace std;
 
int Massiv[7][5] = {0};
 
int main()     
{
    int n, m, Summa = 0;
    
    //cin >> Massiv[][]
    for(n = 0; n < 4; n++)
        for(m = 0; m < 4; m++)
        {
            cout << "\nVvedite element massiva, " << n << " stroka, " << m << " stolbec:";        
            cin >> Massiv[n][m];
        }
    
    for(n = 0; n < 4; n += 2)
        for(m = 0; m < 4; m++)                   
            Summa += Massiv[n][m];        
    cout << "\n\nSumma = " << Summa << "\n";
    
    system("pause");
    return 0;
}
