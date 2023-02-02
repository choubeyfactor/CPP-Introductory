#include <iostream>
using namespace std;
int main(){
    int i , j , A[i][j]= {{2,4,6},{3,5,7}} ;
    /*for (i = 0; i < 2 ; i++)
    {
        for (j = 0; j < 3 ; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }*/

    //using refference and auto without considering data type
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