#include <iostream>
using namespace std;
class Employee 
{
    int id;
    char name [10];
    public:
        void getdata();
        void putdata();
};
void Employee::putdata()
{
    cout << "Enter id: ";
    cin >> id;
    cout << "Enter name: ";
    cin >> name;
}
void Employee::getdata()
{
    cout << id << " ";
    cout << name << " ";
    cout << endl;
}
int main()
{
    Employee emp[20]; //20 objects of type Employee created
    int n, i;
    cout << "Enter number of Employees - ";
    cin >> n;
    for (i=0; i<n; i++)
    {
        emp[i].putdata();
    }
    cout << "Employee Data is: " << endl;
    for (i=0; i<n; i++)
    {
        emp[i].getdata();
    }
}