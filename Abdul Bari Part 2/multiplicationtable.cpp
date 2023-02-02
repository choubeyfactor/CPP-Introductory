#include <iostream>
using namespace std;
int main(){

int i, n , x , a;
cout << "Enter the number of which you want the multiplication table: " << endl;
cin >> x;
cout << "Till what number you want multiplication: " << endl;
cin >> n;

for ( i=0; i < n+1 ; i++)
{
    a=i*x;
    cout << a << endl;
}

    return 0;
}