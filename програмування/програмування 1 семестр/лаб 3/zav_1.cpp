#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    float x,y;
    cout<<"X=";
    std::cin >> x;
    if(x>1) y=1/(x-1);
    else if (-M_PI<x<M_PI/4) y=-pow(cos(x-M_PI),2);
    else y=sqrt(fabs(x+1));
    cout<<"x="<<x<<"\ty="<<y;
    return 0;
    
    
}