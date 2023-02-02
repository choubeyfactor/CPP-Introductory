#include <iostream>
using namespace std;

int main(){

int a,b,c;

cout << " Enter a , b , c respectively " << endl;
cin >> a >> b >> c ;

if (a>b)
{
    if (a>c)
    {
       cout << a <<" is greatest of three given numbers "<< endl; /* code */
    }
    
    else{
        cout << b << " is greatest of given three numbers " << endl;
    }
}

else {
    cout << c <<" is the greatest of all three given number. " << endl;
}

    return 0;
}