#include <iostream>
using namespace std;
int main(){
    int A[10]={6,11,25,8,15,7,12,20,9,14};
    int key;
    cout << "Enter the number: " << endl;
    cin >> key;

    for (int i = 0; i < 10; i++)
    {
        if (A[i]==key)
        {
            cout << "Found at " << i << endl;
            return 0;
        }
    }
        cout << "Not found ";
    return 0;
}