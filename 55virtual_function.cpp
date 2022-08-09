# include <iostream>
using namespace std;
class BaseClass{
    public:
    int var1_base=1;
    virtual    void display(){
        cout<<"1displaying base class variable var_base "<<var1_base<<endl;
    }
};
class DerivedClass: public BaseClass{
    public:
    int var1_Derived=2;
    void display(){
        cout<<"2displaying base class variable var_base "<<var1_base<<endl;
         cout<<"2displaying base class variable var_Derived "<<var1_Derived<<endl;
    }
};
int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer=&obj_derived;    // pointing base class pointer to derived class 
    base_class_pointer->display();
    return 0;
}  