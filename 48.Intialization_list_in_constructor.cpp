# include <iostream>
using namespace std;
/*
stnatax for Intilization list in constructor:
constructor (argument-list): intilization-section{
    assingment + other code;
    
}
class Test{
    int a;
    int b;
    public:
     Test(int i,int j): a(i),b(j){constructor-Body}

};
*/
class Test{
    int a,x,y,c;
    int b;

    public:
    //  Test(int i,int j): a(i),b(j){
    //      cout<<"constructor executed "<<endl;
    //      cout<<"value of a is "<<a<<endl;
    //      cout<<"value of b is "<<b<<endl;
    //  }
    //  Test(int i,int j): x(i),y(j),c(i+j){
    //      cout<<"constructor executed "<<endl;
    //      cout<<"value of x is "<<x<<endl;
    //      cout<<"value of y is "<<y<<endl;
    //      cout<<"sum of x and y "<<c<<endl;
    //  }
    //  Test(int i,int j): x(i),y(x+j){
    //      cout<<"constructor executed "<<endl;
    //      cout<<"value of x is "<<x<<endl;
    //      cout<<"value of y is "<<y<<endl;

    //  }
    //  Test(int i,int j): y(j),x(i+y){      //this function will give garbage value to x bcos at line 18 first we have declared x
    //      cout<<"constructor executed "<<endl;
    //      cout<<"value of x is "<<x<<endl;
    //      cout<<"value of y is "<<y<<endl;

    //  }
     Test(int i,int j): x(i){      
         y=j;
         cout<<"constructor executed "<<endl;
         cout<<"value of x is "<<x<<endl;
         cout<<"value of y is "<<y<<endl;

     }

};
int main(){
    
Test t(2,5);




    return 0 ;
}