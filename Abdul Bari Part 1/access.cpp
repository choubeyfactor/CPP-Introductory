#include <iostream>
using namespace std;
class Rectangle{
    public:int length;
    int breadth;

            int area(){
            return length*breadth;
}
            int perimeter(){
            return 2*(length+breadth);
}
            void setLength(int l){
                if(l>0)
                  length=l;
                length=0;  
            }
};
int main(){
    Rectangle r1;
    r1.length=10;
    r1.breadth=5;
   cout << r1.area() <<endl; 
}