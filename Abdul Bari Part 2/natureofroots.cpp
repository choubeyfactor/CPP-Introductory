#include <iostream>
#include <math.h>
using namespace std;

int main(){

float a,b,c,d;

cout << "Enter a , b , c , d respectively " << endl;
cin >> a >> b >> c >> d ;

d = (b*b)-(4*a*c) ;

if (d<0)
{
    cout << " The discriminant is negative hence the roots are imaginary " << endl;
}
else{
    if (d==0)
    {
        cout << "The roots are real and equal ie " << -b/(2*a)  << endl;
    }
    else {
        cout << "The roots are real but unequal ie "<< (-b + sqrt(d))/(2*a) << " and " << (-b-sqrt(d))/(2*a) << endl; 
    }
}


    return 0;
}












    
