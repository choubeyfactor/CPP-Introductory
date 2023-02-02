#include <iostream>
using namespace std;
int main(){
    int A[10]={2,4,6,8,12,5,7,9,-3,11};
    min = INT_MAX;

    for (auto x:A)
    {
        if (min<x)
        {
            min=x;
        }
        
    }
    
    cout << "The minimum  number of this array is: " << min << endl;
    
        return 0;
}