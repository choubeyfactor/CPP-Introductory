#include <iostream>
using namespace std;
void swap (int &x, int &y);
int main()
{
    int a = 10;
    int b = 40;
    cout << "Before Swap value of a is: " << a << endl;
    cout << "Before Swap value of b is: " << b << endl;
    
    swap(a, b);
    cout << "After Swap value of a is: " << a << endl;
    cout << "After Swap value of b is: " << b << endl;
}
void swap (int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}