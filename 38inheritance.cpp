# include <iostream>
using namespace std;
// Base class 
class Employee{
    public:
    int id;
    float salary;
        Employee(int inpId){
            id=inpId;
            salary=5236;
        }
        Employee(){}
};
// Derived class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/etc....
// }
// note:
// 1. Default visibility mode is private
// 2. Private Visibility Mode: Public members of the base class becomes private members of the derived class
// 3. Public Visibility Mode: Public members of the base class becomes public members of the derived class
// 4. Private members are never inherite
// Derived class (Creating a programmer class derived form Employee Base Class)
class Programmer: public Employee{
    public:
    int langaugeCode=9;
    Programmer(int inpid){
        id = inpid;
        }
    void getData(){
        cout<<id<<endl;
    }
};
int main(){
    Employee Naruto(1),Sasuke(2);
    cout<< Naruto.salary<<endl;
    cout<< Sasuke.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.langaugeCode<<endl;
    skillF.getData();
    cout<<skillF.id<<endl;
    return 0;
}