#include<iostream>
using namespace std;
int main(){
    int sum=0   ;
    int A[6]={1,2,9,88,98,65};
    for (int i = 0; i < 6; i++)
    {
        sum = sum + A[i];
        cout << sum << endl;
    }
  return 0;  
}