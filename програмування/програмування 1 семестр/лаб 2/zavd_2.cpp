#include <iostream>

using namespace std;

int main()
{
    float n,a,b,c,ser,procent;
    cout<<"kiLbkisTb ychniv:";
    cin>>n;
    cout<<"kiLbkisTb ychniv z 5:";
    cin>>a;
    cout<<"kiLbkisTb ychniv z 4:";
    cin>>b;
    cout<<"kiLbkisTb ychniv z 3:";
    cin>>c;
    procent=((a+b)/n)*100;
    cout<<"Procent: "<<procent;
    
    
    ser=((a*5)+(b*4)+(c*3))/n;
    cout<<"\nSer: "<<ser;
    return 0 ;
    
    
}