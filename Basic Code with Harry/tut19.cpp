#include <iostream>
using namespace std;

int add (int a , int b){
    cout << "Using function with two arguments " << endl;
    return a+b;

}

int sum (int a , int b , int c){
    cout << "Using function with three arguments " << endl;
    return a+b+c ;
    
}
/*int main(){
   cout << "The sum of 2, 3 and 5 is " <<  sum(2,3,5) << endl;
   cout << "The sum of 2 and 3 is " << add(2,3) << endl;

   return 0;
}*/

int vol(double r , int h){
    return (3.14*r*r*h);

}

int vol(double a){
return (a*a*a);
}

int vol(int l , int b , int h){
    return(l*b*h);
}
 int main(){
     cout << "The volume of cylinder is " << vol(3 , 2 ) << endl;
     cout << "The volume of cube is " << vol(2) << endl;
     cout << "The volume of rectangle is " << vol(2 , 3, 4) << endl ;
     return 0 ;
 }