#include <iostream>
using namespace std;

template<class T>
T maxim(T a ,T b)
{
return a>b?:b;  
}
/*
int max( int a , int b){
    if (a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
float max( float a , float b){
    if (a>b)
    {
        return a;
    }
    else{
        return b;
    }
*/
int main()
{
    cout << maxim(12,15) <<endl;
    cout << maxim(2.9,7.2) << endl;
    cout << maxim (2.3f , 5.6f) << endl;
    return 0;
}