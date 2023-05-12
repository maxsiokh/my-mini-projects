#include <iostream>
using namespace std;

int main() {
    int r, c, j,i,k;
    float s1,s2;
    float matrixB[j][j];
    cout << "Enter the size of matrix: ";
    cin >> j;
    float matrixA[j][j];

    for (r = 0; r < j; r++) {
        for (c = 0; c < j; c++) {
            cout << "matrixA" << "[" << r << "]" << "[" << c << "] = ";
            cin >> matrixA[r][c];
        }
    }
    cout << "\n";

    for ( i = 0; i < j; i++) {
        for ( k = 0; k < j; k++) {
            cout << " "<<matrixA[i][k] << " ";
        }
        cout << "\n";
    }
cout<<"\n";

cout<<"Main diagonal is: ";
for( i=0;i<j;i++){
    cout<<matrixA[i][i];
}
cout<<"\n";


for( i=0;i<j;i++){
    s1=s1+matrixA[i][i];}
    cout<<"S="<<s1;
    cout<<"\n";
    cout<<"\n";

for(i=0,k=j-1;i<j;i++,k--){
    s2=s2+matrixA[i][k];
    }

    
	
    return 0;
}
