# include <iostream>
using namespace std;
class Complex{
    int real,imaginary;
    public:
        void getdata(){
            cout<<"THe real part is "<<real<<endl;
            cout<<"THe imaginry part is "<<imaginary<<endl;
        }
        void setData(int a,int b){
            real=a;
            imaginary=b;
        }
};
int main(){
    Complex c1;
    Complex *ptr=&c1;
    (*ptr).setData(4,6);
    (*ptr).getdata();
    // we can also make pointer like this
    Complex *p=new Complex;
    (*p).setData(45,5);  
    (*p).getdata();
    Complex *q=new Complex;
    q->setData(5,5);      //or we can write like this by using arrow
    q->getdata();         //or we can write like this by using arrow

    Complex *s=new Complex[3];
    (*s).setData(488,565);  
    (*s).getdata();
    (*(s+1)).setData(4511,585);  
    (*(s+1)).getdata();
    (s+2)->setData(47,53);  
    (s+2)->getdata();
    return 0;
}