#include <iostream>
using namespace std;

//1st prog
/*void display(){
    cout << "Hello" << endl;
}
int main(){

    display();
    return 0;
}*/

// 2nd prog.
/*float add (float x , float y){

    float z;
    z = x + y;
    return z; 
}

int main(){
    float x=2.3 , y=9.6 , z;
    z= add(x,y);
    cout << z << endl;
     
     return 0;
}
*/

//3rd prog
int maximum(int a , int b ,int c){
    if (a<b && c<b)
    {
        return b;
    }
    else if (a>b && a>c)
    {
        return a ;
    }
    else return c;

}

int main(){

    int maxno , a=10 , b=20 , c=30 ;
    maxno = maximum(a,b,c);
    cout << maxno;
    return 0;
}
