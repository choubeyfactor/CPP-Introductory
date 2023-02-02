#include <iostream>
using namespace std;
//function 1
void display (int var1 ,double var2)
{
    cout << "Inter number is "<< var1;
    cout << " & Double number is " << var2 << endl;
}
//function 2
void display (double var)
{
    cout << "Double variable: " << var << endl;
}
//function 3
void display (int var)
{
    cout << "Integer number: " << var << endl;
}
// calling the function
int main ()
{
    int a;
    double b;
    cout << "enter value of a: ";
    cin >> a;
    cout <<"enter the value of b is: ";
    cin >> b;
    display (a);
    display(b);
    display (a,b);

}