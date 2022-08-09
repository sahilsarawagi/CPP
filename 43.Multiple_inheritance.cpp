# include <iostream>
using namespace std;

// syntax for inheriting in multiple inheritance
// class Derived: visibility-mod base1 , visibility-mode base2{
//     class body of class "Derived"
// }; 
class Base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
            base1int=a;
    }
    
};
class Base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
            base2int=a;
    }

};
class Derived:public Base1,public Base2{
    public:
    void show(){
        cout<<"the value of Base 1 is "<<base1int<<endl;
        cout<<"the value of Base 2 is "<<base2int<<endl;
        cout<<"the sum of Base 1 and Base 2 is "<<base1int+base2int<<endl;
    }
};
/*
The inherited derived class will look something like this:
base1int---> protected
base2int---> protected
Member functions:
set_base1int()--->  public
set_base2int()--->  public
show()--->  public
*/

int main(){
    Derived choji;
    choji.set_base1int(5);
    choji.set_base2int(6);
    choji.show();
    return 0;
}