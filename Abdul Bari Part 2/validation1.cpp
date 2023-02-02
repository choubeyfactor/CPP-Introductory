#include <iostream>
using namespace std;

int main(){

    int a,b,c;

    cout << "Tell a & b respectively" << endl;
    cin >> a >> b ;

    c=a%b ;
    
    if (c==0)
    {
       cout <<  "After dividing we get zero as a remainder " ; /* code */
    }
    else
    {
        cout << " after dividing we dont get zero as remainder "; /* code */
    }

return 0;
}