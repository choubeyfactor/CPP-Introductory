#include <iostream>
using namespace std;

int main(){

    int rollno;

    cout << "Enter your roll call " << endl;
    cin >> rollno;

    if (rollno > 0){
        cout << "This is a valid roll-call. " << endl;
    }
    else{
        cout << "This is an invalid roll-call. " << endl;
    }


    return 0;
}