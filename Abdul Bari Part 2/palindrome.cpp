#include <iostream>
using namespace std;
int main()
{
    int r , n , m , rev=0 ;
    cout << "Enter your number: ";
    cin >> n;
n=m;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10 + r;
    }
    if (rev==m){
        cout << "Yes it is a palindrome number. ";
    }
    else{
        cout << "No it is not a palindrome number. " << endl;
    }

    return 0;
}