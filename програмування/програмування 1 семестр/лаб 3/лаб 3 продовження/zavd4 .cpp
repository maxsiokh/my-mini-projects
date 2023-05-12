#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,b,c ;
    cout<<"profit A: ";
    cin>>a;
  	cout<<"profit B: ";
    cin>>b;
	cout<<"profit C: ";
    cin>>c;
    
    if (a>c&&a>b) cout<<"Biggest profit A:   "<<a<< endl;
    if (b>a&&b>c) cout<<"Biggest profit B:   "<<b<< endl;
    if (c>a&&c>b) cout<<"Biggest profit C:   "<<c<< endl;
    
    


    return 0;
}
