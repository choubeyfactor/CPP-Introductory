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
        complex operator * (complex const &obj)
        {
            //Now this area belongs to you! you only are going to define
            //function definition is th emost important part in this..
            //whichever way you will define in that way only the function will operate 
            complex temp;
            temp.real = real + obj.real;
            temp.imag = imag - obj.imag;
        }
        void print(){
            cout << real << " + i " << imag << endl; 
        }
};
int main()
{
    complex c1(10,5) , c2(7,3);
    complex c3= c1 + c2;
    c3.print();
}