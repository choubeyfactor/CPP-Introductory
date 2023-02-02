#include <iostream>
using namespace std;
int main(){
    int age;
        cout << "Tell me your age: " << endl;
        cin>>age;

switch (age)
{
case 18:
    cout <<"Your age is 18" << endl;
    break;
case 22:
    cout <<"Your age is 22" << endl;
default: 
    cout << "No special cases" << endl;
    break;
}
return 0;
}