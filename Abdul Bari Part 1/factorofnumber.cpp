#include <iostream>
using namespace std;
int main(){

int x , i=0;
cout << "Enter the number of which you want the factor: " << endl;
cin >> x ;

for ( i = 1; i<=x; i++)
{
  if(x%i==0)
  
       cout << i << endl;
   
}


return 0;
}