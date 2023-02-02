#include <iostream>
using namespace std;

Class Rectangle{
    public:
    int length;
    int width;

    int perimeter(){
        return 2*(length+width);
    }

    int area(){
        return length*width;
    }
};
int main(){
    Rectangle r1;
    Rectangle *ptr = new Rectangle;
    
    ptr->length=10;
    ptr->breadth=5;
    cout <<ptr->area()<<endl;
    cout << ptr->perimeter()<<endl;
}