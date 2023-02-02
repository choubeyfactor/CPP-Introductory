#include <iostream>
using namespace std;

class Shop{
int itemId[100];
int itemPrice[100];
int counter;

public :
    void initCounter(void) {counter =0;}
    void getItem(void);
    void setPrice(void);
    void displayPrice(void);
};

void Shop :: getPrice(void){
    cout <<  "Enter Id of ypur item" << endl;
    cin >> itemId[counter];
    cout << "Enter the price of the item " << endl;
    cin >> itemPrice[counter];
    counter++ 
}
void Shop :: displayPrice(void){
        for (int i = 0; i < counter; i++)(
            cout << "The Price of item with Id" << itemId[i] << itemPrice[i];
        )
}
int main(){
    Shop  dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.sePrice();
    dukaan.setPrice();

return 0;
}
