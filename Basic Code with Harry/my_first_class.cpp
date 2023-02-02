/*This is my work i did in my first class*/
#include <iostream>
using namespace std;
class Square{
private:
    int side;
public:
    void SetSide(int s){
        side = s;
    }      
    int getside(){
        return side;
    }
};
int main(){
    Square sq1, sq2, sq3;
    sq1.SetSide(10);
    cout << "Square 1 side is:" << sq1.getside() << endl ;
    sq2.SetSide(12);
    cout << "Square 2 side is:" << sq2.getside() << endl ;
    sq3.SetSide(15);
    cout << "Square 3 side is:" << sq3.getside() ;

    return 0;

    }