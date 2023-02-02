#include <iostream>
using namespace std;
int main (){
    float x = 455;
    float & y = x;
    float b = 45.2;
    cout << x << endl;
    cout << y << endl;
    cout << "The value of b is: " << (int)b << endl;
    return 0;
}