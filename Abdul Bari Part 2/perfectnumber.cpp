#include <iostream>
using namespace std;
int main(){
//if sum of factor is equal to double the number then that number is called perfect number
int i , sum=0 , n;
cout << "Enter the number: " << endl;
cin >> n;
for ( i = 1; i < n; i++)
{
    if (n%i==0)
    {
        sum=sum+i;
     cout << sum;
    }
    
}






    return 0;
}