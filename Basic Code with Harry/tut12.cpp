#include <iostream>
using namespace std;
int main(){
    int a=3;
    int* b = &a;
    cout<<b;
    cout << "The adress of a is " << &a << endl;
    cout << "The adress of a is " << b << endl;
    cout << "The adress at value of b is " << *b  <<  endl;


    return 0;
}