# include <iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
           this->a=a;
        }
        void getData(void){
                cout<<"The value of a is "<<a<<endl;
        }

};
int main(){
    // "this" is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.setData(2);
    a.getData();

    return 0;
}