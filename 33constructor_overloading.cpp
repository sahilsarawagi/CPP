# include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(int x,int y){
        a=x;
        b=y;
    }
    Complex(int x){
        a=x;
        b=0;
    }
    Complex(){
        a=0;
        b=0;
    }
    void printdata(void){
        cout<<"The point is {"<<a<<" , "<<b<<"}"<<endl;
    }
};
int main(){
  Complex c1(4,6);
  c1.printdata();
  Complex c2(4);
  c2.printdata();
  Complex c3;
  c3.printdata();

    return 0;
}