# include <iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout<<"ENter the id"<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"the id is "<<id<<" and this is employee number "<<count<<endl;
        }
        //static function has only access of static variable or static member
        static void getCount(void){
            // cout<<id<<endl;     this will throw an error bcos it is not a static member 
            cout<<"THe value of count is "<<count<<endl;
        }
};
// count is the static data member of class Employee
int Employee:: count;       //by default its value is zero
// int Employee:: count=1000;       //we use this if we want  default  value  1000

int main(){
    Employee sahil,sasuke,kakashi;
    // sahil.id=11   cannot do this bcos id is private 
    sahil.setData();
    sahil.getData();
    Employee::getCount();
    sasuke.setData();
    sasuke.getData();
    Employee::getCount();
    kakashi.setData();
    kakashi.getData();
    Employee::getCount();
    return 0;
}