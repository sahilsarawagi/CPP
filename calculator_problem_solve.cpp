// Q. create 2 classes 
// 1 is Simple calculator (takes input of 2 namumber using x utility function and performs +,-,*,/ ).and display the result using anoter fucntion.
// 2  scientific calculator (takes input of 2 namumber using x utility function and perform and perform any four scientific operation of your choice ).and display the result using anoter fucntion. 
// create another class hybrid calculator and iherit it using these two classes 
// Q1. What type of inheritance are you using ?
// Q2. Which mode of inheritance are you using ?
// Q3.Create an object of HybridCalculator and display results of simple and scintific calculator
// Q4. How is code reusabitly implemented
# include <iostream>
# include <string>
# include <cmath>

using namespace std;

class SimpleCalculator{
    protected:
        int x;
        int y;
        int c;
        string q="0";
    public: 
         int Sum(int a1,int a2){
            x=a1;
            y=a2;
            q="sum";
            c= x+y;
            return c;
        }    
        int Subtract(int a1,int a2){
            x=a1;
            y=a2;
            q="subtraction";
            c= x-y;
            return c;
        }    
        int Multiply(int a1,int a2){
            x=a1;
            y=a2;
            q="Multiply";
            c= x*y;
            return c;
        }    
        int Divide(int a1,int a2){
            x=a1;
            y=a2;
            q="Divide";
            c= x/y;
            return c;
        }    
        void display(void){
            cout<<"the result of "<<q<<" of x and y is "<<c<<endl;
        }

};
class  SintificCalculator{
    protected:
        int x;
        int y;
        int c;
        string q="0";
    public: 
         int Square(int a1){
            x=a1;
            q="square";
            c= x*x;
            return c;
        }    
        int cube(int a1){
            x=a1;
            q="cube";
            c= x*x*x;
            return c;
        }    
        int x_to_y(int a1,int a2){
            x=a1;
            y=a2;
            q="x^y";
            c= pow(x,y);
            return c;
        }    
        int remainder(int a1,int a2){
            x=a1;
            y=a2;
            q="remainder";
            c= x%y;
            return c;
        }    
        void print(void){
            
            cout<<"the result of "<<q<<" "<<c<<endl;
        }

};
class HybridCalculator:  public SimpleCalculator,  public SintificCalculator{
    
public:
void display_in_hybreid(){
    cout<<"the result is"<<c<<endl;
}

};

int main(){
    SimpleCalculator v;
    v.Sum(5,32);
    v.display();
    SintificCalculator j;
    j.cube(6);
    j.print();
    HybridCalculator k;
    k.Multiply(4,5);
    k.display_in_hybreid();
    return 0;
}