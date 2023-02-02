#include <iostream>
using namespace std;

/*int factorial(int n){

    if (n<=1){
        return 1;
    }
    return n * factorial(n-1) ;
}

int main(){
    int a;
    cout << "You want factorial of : " << endl;
    cin >> a ;
    cout << "The factorial a is " << factorial(a) << endl;
    return 0;

} */
int fib(int n){
    if(n<2){
        return n;
    }
    return fib(n-2) + fib(n-1);
}

int factorial(int n){
    if (n<=1){
        return 1;
    }
}
int a;
cout << "Enter a number " << endl;
cin >> a ;
cout << "The term in fibonacci sequence at position " << a << "is" << fib(a) << endl;
return 0;