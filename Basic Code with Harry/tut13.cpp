#include <iostream>
using namespace std;
int main() {
    int marks[] = { 23 , 24 , 25};

    marks[0] = 26;
    marks[1] = 27;
    marks[2] = 28;    
    cout << "The marks of first student is " << marks[0] << endl ;
    cout << "The marks of second student is "<< marks[1] << endl ;
    cout << "The marks of third student is " << marks[2] << endl ;

    int *p = marks;
    cout <<  "The marks of first student is " << *p << endl;
    cout << "The marks of second student is "<< *(p+1) << endl;
    cout << "The marks of third student is " << *(p+2) << endl;


    return 0;
}