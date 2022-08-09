# include <iostream>
using namespace std;
/*
Case 1 ->
class B : public A{
  order of execution of constructor  --> first A() Then B()
}
Case 2 ->
class A : public B,public C{
  order of execution of constructor  --> first B() Then C() Then A() 
}
Case 3 ->
class A : public B,virtual public C{
  order of execution of constructor  --> first C() Then B() Then A() 
}
*/
class Base1 {
    int data1;
    public:
        Base1(int i){
            data1=i;
            cout<<"Base1 class construcotr called"<<endl;
        }
        void printdata1(void){
            cout<<"the value of data1 is "<<data1<<endl;
        }
};
class Base2 {
    int data2;
    public:
        Base2(int i){
            data2=i;
            cout<<"Base2 class construcotr called"<<endl;
        }
        void printdata2(void){
            cout<<"the value of data2 is "<<data2<<endl;
        }
};
class Derived :public Base1,public Base2{
    int derived1,derived2;
    public:
        Derived(int a,int b,int c , int d):Base1(a),Base2(b){
            derived1=c;
            derived2=d;
            cout<<"derived class constructor called"<<endl;
        }
        void printdata(void){
            printdata1();
            printdata2();
            cout<<"THe value of derived1 class constructor "<<derived1<<endl;
            cout<<"THe value of derived2 class constructor "<<derived2<<endl;
        }
};
int main(){
    Derived sasuke(1,2,3,4);
    sasuke.printdata();

    return 0;
}