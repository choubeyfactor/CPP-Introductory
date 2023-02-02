#include <iostream>
using namespace std;
int main(){
    int bill;
    int DiscountedBill ;

cout << " Enter the net amount of your bill: " << endl;
cin >> bill ;

if (bill < 100)
{
    cout << "Sorry you are not elegible for the offer and your discount amount is " << bill << endl ;
}
else if (bill>=100 && bill<=500)
{
    cout << "Hurray you get adiscount of 10 percent and your discount amount is " << (bill*9)/10 << endl;
    cout << "So your new net amount is " << bill - ( (bill*9)/10) ; 
}
else if (bill>=500)
{
    cout << "hurray you get a discount of 20 percent and your discount amount is "<< (bill*20)/100 << endl;
    cout << "So your new net amount is " << bill - ((bill*20)/100); 
}
else{
    cout << "Enter valid amount " ;
}
    return 0;
}