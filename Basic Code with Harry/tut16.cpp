#include <iostream>
using namespace std;
int sum(int a, int b){
int c = a+b ;
return c;
}
/* int swap(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;} */

   void swapReferrence(int &a , int &b){
     
                                        int temp = a;
                                        a = b;
                                        b = temp;
   }
int main(){
    //cout << "The sum of 4 and 5 is " << sum(4,5);
    //this will not work
    int x=4 , y=5;
    cout << "The value of x is " << x << " and that of y is " << y << endl;
   //this will work using pointers
    int swap(&x,&y);
    cout << "The value of x is " << x << " and that of b is " << y << endl;

    
    //call by refference
    
    return 0;
}