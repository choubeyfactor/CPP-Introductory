#include <iostream>
using namespace std;
int search(int A[] , int n , int key)
{
    for (int i = 0; i < n; i++)
    {
        if(key==A[i])
        return i;
    }
            return 0;
}

int main(){
    int A[]={2,4,5,8,7,13};
    int k;
    cout << "Enter an element in the array which you have to search: ";
    cin>>k;
    int index=search(A,7,k);
    cout << "Element found at index: " << index << endl;
}