#include <iostream>
using namespace std;
class vehicle() 
{
    public:
        string brand;
        string model;
        int tyre;

        cehicle(string x ,string y ,int z)
        {
                brand = x ;
                model = y ; 
                no. of tyre = z ; 
        }
};
int main()
{
    vehicle car1 ("Mustang" , "xyz" , 5);
    vehicle car2 ("BMW" , "xg", 9);
    cout << car1.brand <<" " << car1.model << car1.tyre << endl;
}