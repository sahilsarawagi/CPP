# include<iostream>
using namespace std;
class Kirana{
    int id;
    float price;
    public:
        void setData(int a ,float b){
            id=a ;
            price=b;
        }
        void getData(void){
            cout<<"Code of this item is "<<id <<endl;
            cout<<"Price of this item is "<<price <<endl;
        }
};
            
int main(){
    int size=3,i=0;
    int p;
    float q;
    Kirana *ptr=new Kirana[size];
    Kirana *ptrTemp=ptr;
    for ( i = 0; i < size; i++)
    {   cout<<"Enter Id and price of item "<<i+1<<endl;
        cin>>p>>q;
        (ptr)->setData(p,q);
        ptr++; 
    }
    ptr=ptrTemp;
    for ( i = 0; i < size; i++)
    {
        ptr->getData();
        ptr++;
    }
    
       
    return 0;
}