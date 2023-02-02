#include <iostream>
using namespace std;
//prog1
/*void fun(int n){
    if(n>0){
        cout << n << endl;
        fun(n-1);
    }
}*/

//prog 2
void fun(int n){
    if(n>0){
        fun(n-1);
                cout << n << endl;
    }
}

int main(){
    int x=5;
    fun(x);
}