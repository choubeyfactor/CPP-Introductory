#include <iostream>
using namespace std;
int main(){
    int n , count=0 ;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            count++;}
    }
            if (count == 2)
            {
                cout << "Yes it is a prime number.";
            }
        else{
            cout << "It is not a prime number" << endl;
        }
    }
    
