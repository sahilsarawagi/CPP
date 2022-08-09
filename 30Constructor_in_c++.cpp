# include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    // creating a constructor
    // constructor is a special member function with same name as of class.  
    // It is used to initilize the objects of its class
    // It is atomatically invoked whenever object is created
    Complex(void);  // consturctor declaration
    void printdata(){
        cout<<"THe value of a and b are "<<a<<" and "<<b<<" respectively"<<endl;
    }

};
Complex ::Complex(void){      // ---> THis is default constructor as it doesnot take any parameter
    a=10;
    b=0;
}
int main(){
    Complex c;
    c.printdata();

    return 0;
}
/* Characteristic of Constructor 
1. It should be declared in the public section of the class
2.They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments 
5. We cannot refer to their address
*/