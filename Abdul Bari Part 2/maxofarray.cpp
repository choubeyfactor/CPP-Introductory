#include <iostream>
using namespace std;
int main(){
    int A[10] = { 12,23,34,45,43,53,33,50,32,49};
    int max = A[0];

    for (int i = 0; i < 10; i++)
    {
        if(A[i]>max){
            max= A[i];
            
        }
    }
     cout << max << endl;
    return 0;
}