#include <iostream>
using namespace std;
/*struct employee
{
   int eID;
   float sallary;
   char favCharacter;
};*/


 typedef struct employee
 {
    int eID;
    float sallary;
    char favCharacter;
 }ep;
 
 union money
 {
     int rice;
     char car;
     float pounds;

 };


int main()
{
    enum Meal {Breakfast , Lunch , Dinner};
    
    cout << Breakfast << endl ;
    cout << Lunch << endl;
    cout << Dinner << endl; 
    }

   /* union money m1;
    m1.rice = 99;
    m1.car = '$';
    cout << m1.rice << endl;
    cout << m1.car << endl ;
*/
    

   /* struct employee Mayank;
        Mayank.eID = 10113;
        Mayank.sallary = 82000.95;
        Mayank.favCharacter = '&';
        cout << "The value of sallary of Mayank is " << Mayank.sallary << endl;
        cout << "The value of eID of Mayank is " << Mayank.eID << endl ;
        cout << "The value of favourite character of Mayank is " << Mayank.favCharacter << endl ;
} */