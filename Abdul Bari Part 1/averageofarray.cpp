#include<iostream>
using namespace std;
int main(){
    int sum=0 , avg , f ;
    int  j , k , l , m , n , o ;
    int A[6]={j,k,l,m,n,o};
    cout << "Enter the total numbers which you will enter: " ;
    cin >> f;
    cout << "Enter the value of j , k , l , m , n , o respectively: " ;
    cin >> j >> k >> l >> m >> n >> o ; 
    for (int i = 0; i < 6; i++)
    {
        sum = sum + A[i];
        avg = sum / f;
       
    }
     cout << avg << endl;
  return 0;  
}