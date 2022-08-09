# include <iostream>
using namespace std;
class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initcounter(void) {
        counter=0;
        }
    void displayPrice(void);
    void setPrice(void);
};
void Shop::setPrice(void){
    cout<<"ENter ID of your item no."<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"ENter price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void Shop:: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of Itme with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}
int main(){
    
Shop dukaan;
dukaan.initcounter();
dukaan.setPrice();
dukaan.setPrice();
dukaan.setPrice();
dukaan.displayPrice();
    return 0;
}