#include <iostream>
using namespace std;
int g=5;
void fun(){
    int a=10;
    a++;
    cout << a << endl;
    g++;
    cout << g << " " << endl;
}
int main(){
    cout << g << endl;
    fun();
    cout << g << endl;
}