#include <iostream>
using namespace std;
int main(){
    int n , r , m ,sum=0;
    cout << "Enter your number: " ;
    cin >> n;
m=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum = sum + (r*r*r);
    }
    if (sum==m)
    {
        cout << "This is an armstrong number ";
    }
    else {
        cout << "This is not an armstrong number ";
    }
    
  return 0;  
    
}


//------------------------------End Of Code------------------------------------------------//
