#include <iostream>
using namespace std;
int main(){
int i , x , a=1 ;
cout << "Till what number you want the factorial : " << endl;
cin >> x;


for ( i=1; i <=x; i++){
a=a*i ;
}
cout << "The factorial of "<< x << " is " << a << endl;

    return 0;
}