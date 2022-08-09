# include <iostream>
using namespace std;
class Base{
    int data1;         // it is private and not inheritable
    public:
     int data2;
     void setData();
     int getData1();
     int getData2();

};
void Base:: setData(){
    data1 = 15;
    data2= 452;
}
int Base:: getData1(){
    return data1;
}
int Base:: getData2(){
    return data2;
}
class Derived: private Base{  // Class is being derived private
        int data3;
        public:
        void process();
        void display();

}; 
void Derived::process(){
    setData();        //we are calling here setedata bcos it is private member of derived class
    data3=data2*getData1();
}
void Derived::display(){
    cout<<"Value of data 1 is "<<getData1()<<endl;
    cout<<"Value of data 2 is "<<data2<<endl;
    cout<<"Value of data 3 is "<<data3<<endl;
}
int main(){
 Derived der;
 //der.setData();  // because we have iherited base class as private now setdata will also inherite in private of derived class , so here we can not call setdata bcos it is private
 der.process();
 der.display();

    return 0;
}