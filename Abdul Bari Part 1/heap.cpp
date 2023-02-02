#include <iostream>
using namespace std;
int main(){
    int size;
    int *p=new int[20];

//deleting is must otherwise it will be a case of memory leak
    delete []p;
    p = new int[40];

    return 0;
}