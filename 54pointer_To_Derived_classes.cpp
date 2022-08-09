# include <iostream>
using namespace std;
class BaseClass{
    public:
    int var1_base;
    void display(){
        cout<<"displaying base class variable var_base "<<var1_base<<endl;
    }
};
class DerivedClass: public BaseClass{
    public:
    int var1_Derived;
    void display(){
        cout<<"displaying base class variable var_base "<<var1_base<<endl;
        cout<<"displaying base class variable var_Derived "<<var1_Derived<<endl;
    }
};
int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer=&obj_derived;    // pointing base class pointer to derived class 
    base_class_pointer->var1_base=12;
    // base_class_pointer->var1_Derived=362; //will thorw an error
    base_class_pointer->display();
    DerivedClass *derived_class_pointer;
    derived_class_pointer=& obj_derived;    
    derived_class_pointer->var1_base=3362;
    derived_class_pointer->var1_Derived=32;
    derived_class_pointer->display();
    return 0;
}