#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Tell me your age : "<< endl;
    cin >> age;
    if (age < 18){
        cout << "You can't have te drink." << endl;
    
    }
    else if(age==18){
        cout << "You will get the drink a year later!!" << endl;
    }
    else {
        cout << "You can have the drink" << endl;
    }
    return 0;
    

}