#include <iostream>
using namespace std;
class complex{
    private : 
        int real ,imag;
    public:
        complex(int r = 0, int i = 0) //paramaterized constructor
        {
                real=r;
                imag=i;
        }
        friend complex operator + (complex const & , complex const &); //prototype of frienfd fun.
        void print(){
            cout << real << " + i" << imag << endl; 
        }
};
complex operator + (complex const &c1, complex const &c2)
{
    //operator overloading def.
    //it is upto user to define
    return complex(c1.real - c2.real , c1.imag * c2.imag);
}
int main()
{
    complex c1(10,5) , c2(7,3);
    complex c3= c1 + c2;
    c3.print();
}