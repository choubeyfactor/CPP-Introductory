#include <iostream>
using namespace std;
int main(){
    int rev=0 , n , r;
    cout << "Enter the number: ";
    cin >> n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10 +r;
    }
        cout << rev << endl;
    return 0;
}