# include <iostream>
using namespace std;
class Bankdeposit{
    int principal;
    float IntrestRate;
    int years;
    float ReturnVal;
    public:
    Bankdeposit(){};
    Bankdeposit(int p, float r, int y);
    Bankdeposit(int p, int r, int y);
    void show();
};
Bankdeposit:: Bankdeposit(int p, float r, int y){
    principal=p;
    IntrestRate=r;
    years=y;
    ReturnVal=principal;
    for (int i = 0; i < y; i++)
    {
        ReturnVal=ReturnVal*(1+IntrestRate);
    }
    
    
}
Bankdeposit:: Bankdeposit(int p, int r, int y){
    principal=p;
    IntrestRate=float(r)/100;
    years=y;
    ReturnVal=principal;
    for (int i = 0; i < y; i++)
    {
         ReturnVal=ReturnVal*(1+IntrestRate);
    }

    
}
void Bankdeposit ::show(){
    cout<<"Your principal value is "<<principal<<" after "<<years<<" years "<<"you will get "<<ReturnVal<<endl;
}

int main(){
    Bankdeposit bd1,bd2;
    int p;
    int R;
    float r;
    int y;
    cout<<"Enter the vlaue of principal amount,rate(in decimal)and years respectively"<<endl;
    cin>>p>>r>>y;
    bd1=Bankdeposit(p,r,y);
    bd1.show();
    cout<<"Enter the vlaue of principal amount,rate(in percentage)and years respectively"<<endl;
    cin>>p>>R>>y;
    bd2=Bankdeposit(p,R,y);
    bd2.show();
    


    return 0;
}