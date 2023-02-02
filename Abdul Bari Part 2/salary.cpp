#include <iostream>
using namespace std;

int main(){

    float BasicSalary;
    float PercentageAllowance;
    float PercentageDeduction;
    float NetSalary;

    cout << "What is the Basic Salary ? " << endl;
    cin >> BasicSalary ;

    cout << " What is the percentage of allowance ? " << endl;
    cin >> PercentageAllowance ;

    cout << "What is the percentage of deduction ?" << endl;
    cin >> PercentageDeduction ;
 

    NetSalary = BasicSalary + BasicSalary * PercentageAllowance - BasicSalary * PercentageDeduction ;
    cout << "The net salary is " << NetSalary << endl;


return 0;
}