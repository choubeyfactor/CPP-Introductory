#include <iostream>
using namespace std;
class Rectangle{
    private:
        int length;
        int breadth;
    public:
    //constructor    
        Rectangle();    
        Rectangle(int l , int b);
        Rectangle(Rectangle &r);
//mutator
        void setLength(int l);
        void setBreadth(int b);
    //accessor    
        int getLength();
        int getBreadth();
        //facilitation
        int area();
        int perimeter();
        //enquiry
        int isSquare();
        //destructor
        ~Rectangle();

};