# include <iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"How are you?"<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"Kaise ho ?"<<endl;
    }
};
class Derived : public Base1,public Base2{
    
    int a;
    public:
    void greet(){
        Base1::greet();
    }
};
class B{
    public :
    void say(){
        cout<<"hello world"<<endl;
    }
};
class D: public B{
    // D's new say() method will override base class's  say() mehtod
    int a;
    public :
    void say(){
        cout<<"hello boiiiiii"<<endl;
    }

};

int main(){
    // ambiguity 1
    Base1 base1obj;  
    Base2 base2obj;  
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();
    // ambiguity 2
    B b;
    b.say();
    D m;
    m.say();
        return 0;
}