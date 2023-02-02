#include <iostream>
using namespace std;
class Student{
    private:
    string name;
    int rollNo;
    int mathMarks;
    int chemMarks;
    int phyMarks;

    public:
         Student(int r , int n , int m , int p , int c ){
                         rollNo=r;
                         name=n;
                         mathMarks=m;
                         phyMarks=p;
                         chemMarks=c;
    
    }
    int total(){
        return  mathMarks + chemMarks + phyMarks;
    }
    char grade(){
        float average=total()/3;
        if (average>60)
        {
             return 'A';
        }
        else if(average>=40 && average<60)
            return 'B';
        else
            return 'C';
    }
};

int main(){
    int rollNo;
    string name;
    int m , p , c ;
    cout << "Enter the Roll no. of a student: ";
    cin >> rollNo;
    cout << "Enter Name of stuudent: ";
    cin >> name;
    cout << "Enter marks in all 3 subject: ";
    cin >> m >> p >> c;
    Student s(rollNo,m,p,c);
    cout << "Total Marks: "<< s.total() << endl;
    cout << "Grade of students: " << s.grade() << endl;
}