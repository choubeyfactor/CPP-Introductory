#include <iostream>
using namespacestd;

class Parent{
    private : int a;
    protected : int c;
    public : int c;

        void funParent(){
            a=10;
            b=5;
            c=15;
        }    
};

class Child: protected Parent
{   private:

    protected:
    
    public:
    void funChild()
    {
      //a=10;
        b=5;
        c=15;
    }
};

class Grandchild :public Child{
    public:
    void funGrandchild(){
       // a=10;
       // b=5;
       // c=20;
    }
};

int main(){
    Child c;
    //c.a=10;
    //c.b=5;
    //c.c=20;
} 