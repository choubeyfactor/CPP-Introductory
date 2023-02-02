#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;
public:
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
    Rectangle r1;
    r1.setBreadth(20);
    r1.setLength(10);
    cout << r1.area();

    return 0;
}

