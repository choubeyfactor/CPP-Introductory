#include <iostream>
using namespace std;
int main(){

int year;
cout << "Enter the year: " << endl;
cin >>  year;

if (year%100==0 && year%4==0 ){
    cout << "Yes it is a leap year " << endl;
}
else if (year%4==0)
{
    cout << "Yes it is a leap year " <<  endl;
}
else {
cout << "No it is not a leap year " ;
}




    return 0;
}