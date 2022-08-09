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
Complex:: Complex(int x,int y){    // This is parameterized constructor as it takes 2 parameter
    a=x;
    b=y;
}
int main(){
    //implicit call
    Complex m(5,6);
    // Explit call
    Complex n=Complex(44,63);
    m.printdata();
    n.printdata();

    return 0;
}