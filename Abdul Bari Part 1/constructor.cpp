#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(){
        length=1;
        breadth=1;
    }
    Rectangle(int l , int b){
        setBreadth(b);
        setLength(l);
    }
    Rectangle(Rectangle &r){
        length=r.length;
        breadth=r.
    }
    void setLength(int l){
        length = l;
    }
    int getBreadth(){
        return breadth;
    }
    void setBreadth(int b){
        breadth = b;
    }
    int getLength(){
        return length;
    }
    int area(){
        return breadth*length;
    }
    int perimeter(){
        return 2*(length + breadth);
    }
};
int main(){
    Rectangle r1(10,5);
    cout << r1.area()<< endl;

    return 0;
}

