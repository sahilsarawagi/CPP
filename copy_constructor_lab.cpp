# include <iostream>
using namespace std;
class Number{
    int a ;
    public:
        Number(){
            a=65;
        }
        Number(int num){
            a=num;
        }        
    //when no copy constructor is found , compiler supplies its own copy construtor
        Number(Number &obj){
            cout<<"COpy constructor called "<<endl;
            a=obj.a;
        }
        void display(){
            cout<<"THe number for this object is "<<a<<endl;

        }

};
int main() {
    Number x,y,z(4),z2;
    z.display();
    x.display();
    y.display();
    // we want to make z1 , which exactly resemble z or x or y
    Number z1(z);       //if we dont write line 13,14,15 even then this line execute poperly bcos  when no copy constructor is found , compiler supplies its own copy construtor
    z1.display();
    z2=z; // Copy constructor not invoked
    z2.display();
    Number z3 = z ;  // copy constructor invoked
    z3.display();
    return 0;
}