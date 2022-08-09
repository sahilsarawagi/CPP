# include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(int,int);
    void printdata(void){
        cout<<"the number a and b are "<<a<<" and "<<b<<endl;
    }
};
Complex:: Complex(int x,int y){   
    a=x;
    b=y;
}
int main(){
    Complex m(7,7);
    Complex n=Complex(205,568);
    m.printdata();
    n.printdata();

    return 0;
}