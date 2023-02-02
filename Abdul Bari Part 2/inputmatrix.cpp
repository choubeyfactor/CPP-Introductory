#include <iostream>
using namespace std;
int main(){
    int i , j , y , A[i][j]= {{2,4,6},{3,5,7}} ;for (auto& x:A)
    {
        for (auto& y:A)
        {
            cout << y << " ";
        }
        cin >> y;
    }
    
    for (auto& x:A)
    {
        for (auto& y:A)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}