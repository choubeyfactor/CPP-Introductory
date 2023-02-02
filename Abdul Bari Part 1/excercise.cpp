#include<iostream>
usingnamespace std;
class Employee{
    private :
    int eid;
    string name;
    
    public:
        Employee(int e,string n)    {
            eid=e;
            name=n;    }
            
            int getEmployeeID(){
                returneid;}
                string getName()
                {returnname;}
                }; 
                class FulltimeEmployee:publicEmployee{
                    private:
                    int salary;
                    
                    public:
                        FulltimeEmployee(int e,string n,int sal):Employee(e,n)    {
                            salary=sal;    }
                            
                            int getSalary(){
                                returnsalary;}
                                };
                                
                                class ParttimeEmployee: publicEmployee{
                                    private:
                                    int wage;
                                    public:    
                                    ParttimeEmployee(int e,string n,int w):Employee(e,n)    {wage=w;    }
                                    int getWage(){returnwage;}
                                    }; 
                                    
                                    int main(){
                                                        ParttimeEmployee p1(1,"John",300);
                                                        FulltimeEmployee p2(2,"Raj",5000);
                                                        
                                                        cout<<"Salary of "<<p2.getName()<<" is "<<p2.getSalary()<<endl;
                                                        cout<<"Daily wage of "<<p1.getName()<<" is "<<p1.getWage()<<endl;
                                                        }