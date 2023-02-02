#include <iostream>
using namespace std;
class Student
{
    public:
        double marks_subj1 , marks_subj2 ;
};
Student createStudent()
{
    Student std1;
    std1.marks_subj1 = 68.98;
    std1.marks_subj2 = 43.66;

    cout << "Marks of Subject 1 is : " << std1.marks_subj1 << endl;
    cout << "Marks of Subject 2 is: " << std1.marks_subj2 << endl;
    return std1;
}
int main()
{
    Student std11;
    std11 = createStudent();
}