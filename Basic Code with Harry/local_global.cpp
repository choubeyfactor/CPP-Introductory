#include <iostream>
using namespace std;
int glo = 3;
void sum (){
    int a;
    cout << glo;
}
int main(){
    int glo = 9;
    glo = 78;
    sum();
    cout << glo;
    return 0;
}