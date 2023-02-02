#include <iostream>
using namespace std;

/* inline int product(int a, int b){
    return a*b;
}

int main(){
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b ;
    cout << "The product of a and b is " << product(a,b) << endl ;
    cout << "The product of a and b is " << product(a,b) << endl ;
    cout << "The product of a and b is " << product(a,b) << endl ;
    cout << "The product of a and b is " << product(a,b) << endl ;
    cout << "The product of a and b is " << product(a,b) << endl ;
    cout << "The product of a and b is " << product(a,b) << endl ;

    return 0 ;

} */
int moneyRecieved(int current_money , int interest_factor=8.04){
     return (current_money)*(interest_factor) ;
}
int main(){
    
   int current_money = 100000 ;
    cout << "If you have " <<current_money << "Rs in your bank account, you will recieve " << moneyRecieved(current_money) <<" rs after 1 year" << endl;

return 0;
}