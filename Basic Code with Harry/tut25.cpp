/*
#include <iostream>
using namespace std;
class employee{
    int id;
    int sallary;
   public:
   void setid(void){

       sallary = 122;
       cout << "Enter the id of employee " << endl;
       cin >> id;
   } 
   void getid(void){
       cout << "The id of this employee is " << id << endl;

   }
};

int main(){
    //employee harry ,rohan , lavish , shruti ;
    //harry.setId();
    //harry.getid();
   
employee fb[4];
for (int i = 0; i<4 ; i++){
    fb[i].setid();
    fb[i].getid();
};


    return 0; 
}
*/

#include <iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
        void setData(int v1 , int v2){
                a= v1;
                b=v2;
    }

    void setDataBySum(complex o1 , complex o2){

                a = o1.a + o2.a;
                b = o1.b + o2.b;
    }
    void printData(){
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
};

int main(){

    complex c1 , c2 , c3;
    c1.setData(1,2);
    c1.printData();

    c2.setData(3 , 4);
    c2.printData();

    c3.setDataBySum(c1 , c2);
    c3.printData();

    return 0;
}
