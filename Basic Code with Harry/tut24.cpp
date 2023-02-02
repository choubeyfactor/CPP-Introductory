#include <iostream>
using namespace std;
class employee{

    int id;
  //  int count;
  static int count;
  public:
    void setData(void){
        cin >> id;
    }
    void getData(void){
        cout <<" The id of employee is " << id << "and this is employee number " << count << endl;

    }
};
int employee :: count ;

int main(){
    employee harry , shreta , lavish;

    harry.setData();
    harry.getData();

    shreta.setData();
    shreta.getData();

    lavish.setData();
    lavish.getData();

    return 0;
}